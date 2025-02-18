#!/usr/bin/env python
# coding: utf-8

# In[5]:


import pandas as pd
d=pd.read_csv("/Users/student/Downloads/work-sheet cine.csv")
print(d)


# In[7]:


import pandas as pd
df=pd.DataFrame(d)
print("column:",df.columns)
print(df.shape)


# In[9]:


print("talent",df['talent'])


# In[10]:


print(df[5:10])


# In[11]:


print("particular person details",df.loc[2])


# In[ ]:




