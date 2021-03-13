import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv('Social_Network_Ads.csv')
x = dataset.iloc[:,2:-1].values
y = dataset.iloc[:,-1].values

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split( x,y,test_size=1/4 , random_state=0 )

#feature Scalling
from sklearn.preprocessing import StandardScaler
sc_x = StandardScaler()
x_train = sc_x.fit_transform(x_train)
x_test = sc_x.transform(x_test)

#fitting ML model to training sets
from sklearn.linear_model import LogisticRegression
classifier = LogisticRegression()
classifier.fit(x_train,y_train)

#predicting values
y_pred= classifier.predict(x_test)

#checking the correctness of model
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test,y_pred)

#Visualising predictions
