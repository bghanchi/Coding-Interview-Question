#Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that 
#prod[i] is equal to the product of all the elements of arr[] except arr[i]. Solve it without division 
#operator and in O(n)

import math
#input
size=int(input(("Enter the size of array: ")))
s=size
arr=[]
result=[]

while size != 0:
    num=int(input())
    arr.append(num)
    size=size-1

#logic
copyArr=arr.copy()

for i in range(len(arr)):
    rem=arr[i]
    copyArr.remove(rem)
    result.append(math.prod(copyArr))
    copyArr=arr.copy()

print("RESULTANT ARRAY IS :- ")
print(result)
