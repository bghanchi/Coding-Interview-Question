def LongestContinouesSubarraySum(arr):
    n=len(arr)
    MaximumSum,MaxSize=arr[0],1
    count,summ=1,arr[0]
    for i in range(1,n):
        if arr[i]>arr[i-1]:
            count+=1
            summ+=arr[i]
        else:
            if count>MaxSize:
                MaxSize=count
                MaximumSum=summ
            elif count==MaxSize and summ>MaximumSum:
                MaximumSum=summ                            
            count,summ=1,arr[i]    

    if count>MaxSize:
        return summ
    elif count==MaxSize:
        return max(MaximumSum,summ) 
    else: 
            return MaximumSum              

n=int(input())
arr=[int(i) for i in input().split()]
print(LongestContinouesSubarraySum(arr))    


#Time Complexity:- O(N)