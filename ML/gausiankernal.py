import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv('Social_Network_Ads.csv')
x= dataset.iloc[:,[2,3]].values
y= dataset.iloc[:,-1].values

from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x, y, test_size=1/4, random_state = 1)

from sklearn.preprocessing import StandardScaler
ss= StandardScaler()
x_train= ss.fit_transform(x_train)
x_test= ss.transform(x_test)

from sklearn.svm import SVC
classifier = SVC(kernel= 'rbf', random_state= 1)
classifier.fit(x_train,y_train)

y_pred= classifier.predict(x_test)

from sklearn.metrics import confusion_matrix
cm= confusion_matrix(y_test,y_pred)

#visualising training set
from matplotlib.colors import ListedColormap
x_set , y_set = x_train, y_train
from sklearn.tree import DecisionTreeRegressor
reg= DecisionTreeRegressor()
#..................