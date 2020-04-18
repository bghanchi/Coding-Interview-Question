#!/usr/bin/env python
# coding: utf-8

# In[ ]:





# In[ ]:





# In[ ]:


n = int(input("enter no of array elemnets: "))
arr = []
print("enter elements")

# for i in range (n):
#     num = int(input())
#     arr.append(num)

#arr = [int(i) for i in input().split(" ")]

arr = list(map(int,input().split()))

arr1 = arr[ :len(arr)//2]
arr2 = arr[len(arr)//2: ]

sum_arr1=0
for i in arr1:
    sum_arr1 += i
#else:
#    print(sum_arr1)
sum_arr2 = 0
for i in arr2:
    sum_arr2 += i
#else:
#    print(sum_arr2)

if sum_arr1 > sum_arr2:
    print ("Minimum sum is in second half: ",sum_arr2)
else:
    print("Minimum sum is in first half: ",sum_arr1)


# In[ ]:




