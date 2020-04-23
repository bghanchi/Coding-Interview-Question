#Given an unsorted array of integers, find the sum of longest Continuous increasing     
# subsequence.

#LOGIC
def longestSubsequence(arr):
    s=arr[0]
    sum1=0
    for i in range(len(arr)-1):
        if arr[i]<arr[i+1]:
            s+=arr[i+1]
            if s>sum1:
                sum1=s
        else:
            if s>sum1:
                sum1=s
            s=arr[i+1]
    print(sum1)
    return sum1

#INPUT CODE
size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input(" "))
    arr.append(num)
    size=size-1
print("SUM OF LONGEST SUBSEQUENCE IS: ",longestSubsequence(arr))