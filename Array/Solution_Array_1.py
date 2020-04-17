def Max_Freq(arr):
    maxFreq,element=0,arr[0]
    for i in arr:
        if arr.count(i)>maxFreq:
            element=i        
        maxFreq=max(maxFreq,arr.count(i))
    return element

n=int(input())
arr=[int(i) for i in input().split()]
print(Max_Freq(arr))


#Time Complexity->O(N^2) we can reduce time complexity using some of Data Structures which we will discuss in the upcoming week.

