def MinHalf(arr):
    return min(sum(arr[:int(len(arr)/2)]),sum(arr[int(len(arr)/2):]))

n=int(input())
arr=[int(i) for i in input().split()]
print(MinHalf(arr))

#Time Complexity:- O(N)
