import pandas as pd;
import numpy as np
import matplotlib.pyplot as plt

#importing dataset
dataset = pd.read_csv('Social_Network_Ads.csv')
x= dataset.iloc[:, [2,3]].values
y= dataset.iloc[:,-1].values

#splitting dataset into training and test set
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test= train_test_split(x,y,test_size=0.25, random_state=1)

#feature scaling
from sklearn.preprocessing import StandardScaler
sc= StandardScaler()
x_train= sc.fit_transform(x_train)
x_test=sc.transform(x_test)

#fitting the model
from sklearn.neighbors import KNeighborsClassifier
classifier= KNeighborsClassifier(n_neighbors=5, metric= 'minkowski', p=2)
classifier.fit(x_train,y_train)

#predicting the test set
y_pred= classifier.predict(x_test)

#confusion metrix to see how many incorrect predictions
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)
#visulalising plot:




