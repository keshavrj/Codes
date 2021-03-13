# Data Preprocessing Template
# Importing the libraries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# Importing the dataset
dataset = pd.read_csv('Position_Salaries.csv')
X = dataset.iloc[:, 1:2].values
y = dataset.iloc[:, -1].values

# Splitting the dataset into the Training set and Test set is not needed because we have very less information and we need to mAKe a very accurate prediction 

#fitting linear regression to the dataset
from sklearn.linear_model import LinearRegression
lin_reg = LinearRegression()
lin_reg.fit(X,y)

#fitting polynomial regression to the dataset
from sklearn.preprocessing import PolynomialFeatures
poly_reg = PolynomialFeatures(degree = 4)
X_poly = poly_reg.fit_transform(X)

lin_reg2 = LinearRegression()
lin_reg2.fit(X_poly, y)

#visualising linear regression model 
plt.scatter(X, y, color= 'red')
plt.plot(X , lin_reg.predict(X), color = 'blue')
plt.title('Truth or Bluff (linear regression)')
plt.xlabel('Position level')
plt.ylabel('Salary')

plt.show()

#visualising Polynomial regression model
X_grid = np.arange(min(X), max(X), 0.1) #vector de rha hai -->these two lines are two make the curve..
X_grid = X_grid.reshape(len(X_grid),1)                   # --^..more smoother                           
plt.scatter(X, y , color = 'magenta')
plt.plot(X_grid, lin_reg2.predict(poly_reg.fit_transform(X_grid)), color = 'brown')
plt.title('Truth or Bluff (Polynomial regression)')
plt.xlabel('Position level')
plt.ylabel('Salary')

plt.show()


#predicting new results :
p = float(input("enter position to predict: "))
print("Linear Model ans = " , lin_reg.predict([[p]]))
print("Polynomial Model ans = " , lin_reg2.predict(poly_reg.fit_transform([[p]])))


