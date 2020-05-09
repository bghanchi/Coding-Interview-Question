# Given an array of size N. Find two elements from the array whose product is maximum.
n=int(input("Enter the size of array: "))
list=[]
for i in range(n):
    ele = int(input())
    list.append(ele)
a=list[0]
b=list[1]
for i in range(n):
    for j in range(i+1,n):
        if ( list[i]*list[j] > a*b):
            a=list[i]
            b=list[j]
print("Maximum Product is :" ,a*b)
        
