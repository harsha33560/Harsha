#!/usr/bin/env python
# coding: utf-8

# In[3]:


import pandas as pd 
df=pd.DataFrame([[1,2,3],[4,5,6],[7,8,9]],
index=['one','two','three'],
columns=['a','b','c'])
print(df)


# In[4]:


df.to_excel("/Users/student/Downloads/shyam.xlsx")


# In[5]:


df=pd.DataFrame([[10,20,30],[40,50,60,],[70,80,90]],
                index=['four','five','six'],
                columns=['x','y','z'])
df.to_excel("/Users/student/Downloads/shyam.xlsx")


# In[12]:


df=pd.DataFrame([[6,7],[1,2]],
             index=['a','b'],
             columns=['x','y'])
df.to_excel("/Users/student/Downloads/shyam.xlsx")


# In[12]:


import pandas as pd
x=pd.read_excel("/Users/student/Downloads/shyam.xlsx")
y=pd.read_excel("/Users/student/Downloads/shyam02.xlsx")
z=pd.concat([x,y])
z.to_excel("/Users/student/Downloads/shyam.xlsx")


# In[14]:


df=z.sort_values(["x"])
print(df)
df.to_excel("/Users/student/Downloads/shyam.xlsx")
df=z.sort_values("y")
print(df)
df.to_excel("/Users/student/Downloads/shyam.xlsx")


# In[17]:


df=pd.read_excel("/Users/student/Downloads/shyam.xlsx")
print(df)
print(list(df))
print(format(len(df)))


# In[ ]:




