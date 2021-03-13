# Data Preprocessing Template
# Importing the libraries
import numpy as np
#import matplotlib.pyplot as plt
import pandas as pd

# Importing the dataset
dataset = pd.read_csv('50_Startups.csv')
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, -1].values

# Encoding categorical data
# Encoding the Independent Variable
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder
ct = ColumnTransformer(transformers=[('encoder', OneHotEncoder(), [3])], remainder='passthrough')
X = np.array(ct.fit_transform(X), dtype=float)

#Avoiding the dummy variable trap:
X= X[:, 1:] #we dont't need to do that becaause python take cares of it

# Splitting the dataset into the Training set and Test set
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 1/5, random_state = 0)
#no need of feaqture scaling , library will take care of it

from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)
y_pred = regressor.predict(X_test)

import statsmodels.api as sm
X = np.append(arr = np.ones((50,1)).astype(int), values=X, axis=1)
x_opt = X[:, [0,1,2,3,4,5]]
reg_ols= sm.OLS(endog = y, exog = x_opt, missing = None).fit()
#print(reg_ols.summary())

#we have take SL as 0.05 i.e we will remove all columns with p>0.05(5%)

x_opt = X[:, [0,1,3,4,5]]
reg_ols= sm.OLS(endog = y, exog = x_opt, missing = None).fit()
#print(reg_ols.summary())

x_opt = X[:, [0,3,4,5]]
reg_ols= sm.OLS(endog = y, exog = x_opt, missing = None).fit()
#print(reg_ols.summary())

x_opt = X[:, [0,3,5]]
reg_ols= sm.OLS(endog = y, exog = x_opt, missing = None).fit()
#print(reg_ols.summary())

x_opt = X[:, [0,3]]
reg_ols= sm.OLS(endog = y, exog = x_opt, missing = None).fit()
print(reg_ols.summary())
#backward elimination completes here....





  