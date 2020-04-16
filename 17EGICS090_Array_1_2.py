#Task 1
print("This is Q1 of Week 1")
n = int(input("Enter size of array: "))
array = []
feq = [0]*10
for i in range(0,n):
	array.append(int(input("Enter value %d: " %(i+1))))
	feq[array[i]]+=1
maxfeq = max(feq)
print(feq.index(maxfeq),"repeated",maxfeq,"times the most")


#Task 2
print("\n\n\n\nThis is Q2 of Week 1")
n = int(input("Enter size of array: "))
array1 = []
array2 = []
for i in range(0,n):
	if i<(n//2):
		array1.append(int(input("Enter value %d: " %(i+1))))
	else:
		array2.append(int(input("Enter value %d: " %(i+1))))

arr1sum = sum(array1)
arr2sum = sum(array2)
print("Minimum sum: ",min(arr1sum,arr2sum))