# -*- coding: utf-8 -*-
"""
Created on Fri Aug  5 11:05:42 2022

@author: anass
"""

import pandas as pd
from sklearn.datasets import load_iris

iris=load_iris()


df=pd.DataFrame(iris.data,columns=iris.feature_names)



df["target"]=iris.target



from sklearn.model_selection import train_test_split

x_train,x_test,y_train,y_test=train_test_split(df.drop(["target"],axis="columns"),
                                                       iris.target,test_size=0.20)


# from sklearn.ensemble import RandomForestClassifier
# model = RandomForestClassifier()

# model.fit(x_train,y_train)
# model.score(x_test, y_test)




model=RandomForestClassifier(n_estimators=50)
model.fit(x_train,y_train)
model.score(x_test, y_test)

y_predicted=model.predict(x_test)


