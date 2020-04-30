def solve(arr,n):
    Map=dict()
    result=0
    for key in arr:
        if Map.get(key)!=None:
            Map[key]+=1
        else:
            Map[key]=1    
    for i in range(n):
        if Map.get(arr[i]+1)!=None:
            result+=1        
    return result        

n=int(input())
arr=[int(i) for i in input().split()]
print(solve(arr,n))