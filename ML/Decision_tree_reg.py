#decision tree regression is a non linear regression method and also it is non-continous in nature

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv('Position_Salaries.csv')
X= dataset.iloc[:,1:2].values
y= dataset.iloc[:,-1:].values

from sklearn.tree import DecisionTreeRegressor
regressor = DecisionTreeRegressor()
regressor.fit(X,y)

#for smoother curve
x_grid= np.arange(min(X), max(X), 0.01)
x_grid = x_grid.reshape(len(x_grid),1) #matrix conversion
plt.scatter(X,y, color= 'red')
plt.plot(x_grid, regressor.predict(x_grid), color= 'blue')
plt.show()
print(regressor.predict([[6.5]]))