#Given an array of size N. Divide the array into two halves and calculate the sum of both the halves 
# and print the sum having minimum value.

def minSum(arr,s):
    s=int(s/2)
    first=arr[:s]
    second=arr[s:]
    sum1=sum(first)
    sum2=sum(second)
    return min(sum1,sum2)

size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input())
    arr.append(num)
    size=size-1
print("MINIMUM SUM: ",minSum(arr,s))