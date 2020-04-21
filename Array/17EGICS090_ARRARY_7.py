#Task 7
def checkleader(ele,arr):
	for i in arr:
		if ele<=i:
			return False
	return True
array = list(map(int,input().split()))
for i in array:
	if checkleader(i,array[array.index(i)+1:-1]):
		print(i,end=" ")
