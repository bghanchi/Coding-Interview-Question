def UniqueElemet(arr):
    for i in arr:
        if arr.count(i)==1:
            return i
    return "No unique element present"        

n=int(input())
arr=[int(i) for i in input().split()]
print(UniqueElemet(arr))


#Time Complexity->O(N^2) we can reduce time complexity using some of Data Structures which we will discuss in the upcoming week.

    