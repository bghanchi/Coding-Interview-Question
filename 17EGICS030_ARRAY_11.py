#ASSIGNEMENT-5
#Given an array of N integers, find the contiguous subarray (containing at least one number) 
# which has the largest sum and print its sum.

def maxSubarray(arr):
    sum=0
    maxSum=max(arr)
    subArray=[]
    for ele in arr:
        sum += ele
        if(sum<0):
            sum=0
            subArray=[]
        if(maxSum<sum):
            maxSum=sum
    print("SUBARRAY IS: ",subArray)
    return maxSum

size=int(input(("Enter the size of array: ")))
s=size
arr=[]

for i in range(size):
    num=int(input())
    arr.append(num)

print("MAXIMUM SUM: ",maxSubarray(arr))