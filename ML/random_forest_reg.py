#ensembling is best method
#because it takes prediction of different models and average them to show o/p 

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

dataset= pd.read_csv('Position_Salaries.csv')
x= dataset.iloc[:,1:2].values
y= dataset.iloc[:,-1]

from sklearn.ensemble import RandomForestRegressor
regressor = RandomForestRegressor(n_estimators=280, random_state=0)
regressor.fit(x,y)

xgrid= np.arange(min(x), max(x) , 0.01)
xgrid= xgrid.reshape(len(xgrid),1)
plt.scatter(x, y, color= 'red')
plt.plot(xgrid, regressor.predict(xgrid), color = 'blue')
plt.show()

print(regressor.predict([[6.5]]))