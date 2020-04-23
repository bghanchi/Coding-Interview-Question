#!/usr/bin/env python
# coding: utf-8

# In[5]:


n = int(input("enter no of array elemnets: "))
arr = []
print("enter elements")
arr = list(map(int,input().split()))
def max_occu(arr):
    maxele,first = 0,arr[0]
    for item in arr:
        if arr.count(item)>maxele:
            first = item
        maxele = max(maxele,arr.count(item))
    return(first)
#print("highest occured number",max_occu(arr))

from collections import Counter
freq = (Counter(arr))
for key,value in freq.items():
    print(max_occu(arr),"occured",value,"times")
    


# In[ ]:




