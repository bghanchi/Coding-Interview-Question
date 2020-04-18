#Task 2
n = int(input())
array1 = []
array2 = []
for i in range(0,n):
	if i<(n//2):
		array1.append(int(input()))
	else:
		array2.append(int(input()))

arr1sum = sum(array1)
arr2sum = sum(array2)
print("\n"+str(min(arr1sum,arr2sum)))