# Given an unsorted array of integers, find the sum of longest Continuous increasing Subsequence.
n=int(input("Enter the size of array: "))
list=[]
for i in range(n):
    ele = int(input())
    list.append(ele)
result = 0


for i in range (n):
    curr_sum = list[i]

    while (i+1<n and list[i+1]>list[i]):
    
        curr_sum+=list[i+1]
        i+=1
    if (curr_sum>result):
        result = curr_sum
print("Maximum sum is: ",result)
