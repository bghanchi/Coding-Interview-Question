#Given an array of positive numbers, find the maximum sum of a subsequence with the 
#constraint that no 2 numbers in the sequence should not be adjacent in the array.

def maxSub(arr):
    sum=0
    curr=arr[0]
    for i in range(1,len(arr)):
        res=max(sum,curr)
        curr=arr[i]+sum
        sum=res
    return max(sum,curr)

size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input())
    arr.append(num)
    size=size-1
print("MAXIMUM SUM: ",maxSub(arr))