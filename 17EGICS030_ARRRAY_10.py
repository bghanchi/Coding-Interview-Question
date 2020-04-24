#ASSIGNMENT 5
#Given an array of N integers and a target value, print the index if the target is found. 
# If not, print the index where it would be if it were inserted in order.
# You may assume no duplicates in the array.

index=0
n=int(input(("Enter the size of array: ")))
t=int(input("Enter the target value: "))
print("Enter the array elements: ")
flag=False
arr=[]

for i in range(n):
    num=int(input())
    arr.append(num)
    if not flag:
        if (arr[i] == t):
            flag=True
            index=i
        if arr[i-1]<t and arr[i]>t:
            flag=True
            n=n+1
            arr.insert(i,t)
            index=i
print(arr)
print("INDEX OF TARGET VALUE IN ARRAY: ",index)