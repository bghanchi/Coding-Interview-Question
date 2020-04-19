def MaxProduct(arr,n):
    if n>1:
        a=max(arr)
        arr.remove(a)
        return a*max(arr)
    else:
        return arr[0]

n=int(input())
arr=[int(i) for i in input().split()]
print(MaxProduct(arr,n))


#Time Complexity- O(N) 