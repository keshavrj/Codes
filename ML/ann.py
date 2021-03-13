import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv('Churn_Modelling.csv')
x= dataset.iloc[:,3:-1].values
y=dataset.iloc[:,-1:].values

from sklearn.preprocessing import LabelEncoder
le = LabelEncoder()
x[:, 2] = le.fit_transform(x[:, 2])

# One Hot Encoding the "Geography" column
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder
ct = ColumnTransformer(transformers=[('encoder', OneHotEncoder(), [1])], remainder='passthrough')
x = np.array(ct.fit_transform(x))

from sklearn.preprocessing import StandardScaler
ss = StandardScaler()
x=ss.fit_transform(x)

from sklearn.model_selection import train_test_split
x_train, x_test, y_train , y_test = train_test_split(x,y,test_size=0.25, random_state=0)

import tensorflow as tf
from tensorflow.keras import Sequential
from tensorflow.keras import layers
ann= Sequential([
    layers.BatchNormalization(),
    layers.Dense(10,activation='relu'),
    layers.BatchNormalization(),
    layers.Dense(10,activation='relu'),
    layers.Dense(1,activation='sigmoid')
    ])
ann.compile(
    optimizer='adam',
    loss='binary_crossentropy',
    metrics= ["accuracy"],
    )
early_stopping = tf.keras.callbacks.EarlyStopping(monitor='accuracy',
    patience=5,
    min_delta=0.001,
    restore_best_weights=True,
)

ann.fit(x_train,y_train, batch_size=32, epochs=100, callbacks=[early_stopping],
        )

y_pred= ann.predict(x_test)
y_pred= (y_pred>0.5)
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)
