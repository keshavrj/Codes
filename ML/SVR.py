import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv('Position_Salaries.csv')
X= dataset.iloc[:, 1:2].values
y = dataset.iloc[:,-1:].values

#SVR doesn't apply feature scalling on its own so we need to apply that manually:
from sklearn.preprocessing import StandardScaler
sc_X = StandardScaler()
sc_y = StandardScaler()
X= sc_X.fit_transform(X)
y= sc_y.fit_transform(y)
from sklearn.svm import SVR
regressor = SVR()
regressor.fit(X,y)


#for a smooth curve :
xgrid = np.arange(min(sc_X.inverse_transform(X)), max(sc_X.inverse_transform(X)), 0.1)
#we have previously scaled our data, so to get the original value we are using inverse_transform().
xgrid= xgrid.reshape(len(xgrid), 1)
plt.scatter(sc_X.inverse_transform(X), sc_y.inverse_transform(y), color ='red')
plt.plot(xgrid, sc_y.inverse_transform(regressor.predict(sc_X.transform(xgrid))), color = 'blue')
plt.title('SVR Model prediction')
plt.xlabel('position')
plt.ylabel('salary')

#predicting new values:
zz= float(input('Enter position to predict : '))
print(sc_y.inverse_transform(regressor.predict(sc_X.transform([[zz]]))))
