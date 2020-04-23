#Task 7
array = list(map(int,input().split()))
N = len(array)
for i in range(0,N):
	flag = 0
	for j in range(i+1,N):
		if array[j]>=array[i]:
			flag=1
			break
	if flag==0:
		print(array[i],end=" ")
