import numpy as np
import pandas as pd 
import matplotlib.pyplot as plt

dataset = pd.read_csv('Social_Network_Ads.csv')
x= dataset.iloc[:,[2,3]].values
y= dataset.iloc[:,-1].values

from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test= train_test_split(x,y,test_size=1/4, random_state=0)

from sklearn.preprocessing import StandardScaler
ss= StandardScaler()
x_train= ss.fit_transform(x_train)
x_test= ss.transform(x_test)

from sklearn.naive_bayes import GaussianNB
classifier = GaussianNB()
classifier.fit(x_train,y_train)
y_pred= classifier.predict(x_test)


from sklearn.metrics import confusion_matrix,mean_absolute_error
cm= confusion_matrix(y_test,y_pred)
mae= mean_absolute_error(y_test,y_pred)
print("mae=",mae)