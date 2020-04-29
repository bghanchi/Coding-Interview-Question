def solve(arr,n,target):
    Map=dict()
    for key in arr:
        if Map.get(key)!=None:
            Map[key]+=1
        else:
            Map[key]=1
    Pair=[]        
    for A in arr:
        B=target-A
        if Map.get(B)!=None:
            if Map[A]>0 and Map[B]>0:
                Pair.append([A,B])
            Map[A]-=1
            Map[B]-=1

    return Pair            


n=int(input())
arr=[int(i) for i in input().split()]
target=int(input())
print(solve(arr,n,target))