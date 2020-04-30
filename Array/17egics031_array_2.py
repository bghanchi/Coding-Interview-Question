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
if (s<=1000000 and s%2==0):
    for size in range(s):
        num=int(input())
        arr.append(num)
    
print("MINIMUM SUM: ",minSum(arr,s))

        


    

