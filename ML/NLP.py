# Natural Language Processing
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

dataset= pd.read_csv('Restaurant_Reviews.tsv', delimiter='\t', quoting= 3)

#cleaning the text
import re
import nltk
from nltk.stem.porter import PorterStemmer
nltk.download('stopwords')
from nltk.corpus import stopwords
corpus=[]
for i in range(0,1000):
    review= re.sub('[^a-zA-Z]',' ',dataset['Review'][i])
    review= review.lower()
    review= review.split()
    ps= PorterStemmer()
    review=[ps.stem(word) for word in review if not word in set(stopwords.words('english'))]
    review=' '.join(review)
    corpus.append(review)

#creating the bag of words model
from sklearn.feature_extraction.text import CountVectorizer
cv= CountVectorizer(max_features=1000)
x= cv.fit_transform(corpus).toarray()
y= dataset.iloc[:,-1].values

#splitting the dataset
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test= train_test_split(x,y,test_size=0.2, random_state=0)

from sklearn.ensemble import RandomForestClassifier
classifier = RandomForestClassifier(n_estimators = 10, criterion = 'entropy', random_state = 0)
classifier.fit(x_train, y_train)

# Predicting the Test set results
y_pred = classifier.predict(x_test)

from sklearn.metrics import confusion_matrix
cm= confusion_matrix(y_test,y_pred)
