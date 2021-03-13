import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset= pd.read_csv('Social_Network_Ads.csv')
x= dataset.iloc[:,[2,3]].values
y= dataset.iloc[:,-1].values

from sklearn.model_selection import train_test_split
xtrain,xtest,ytrain,ytest= train_test_split(x,y,test_size=0.25, random_state= 1)


from sklearn.preprocessing import StandardScaler
sc= StandardScaler()
xtrain=sc.fit_transform(xtrain)
xtest=sc.transform(xtest)

from sklearn.svm import SVC
classifier = SVC(random_state=1)
classifier.fit(xtrain,ytrain)

y_pred= classifier.predict(xtest)

from sklearn.metrics import confusion_matrix
cm= confusion_matrix(ytest, y_pred)

#visualising dataset