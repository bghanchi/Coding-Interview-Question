#Task 5
n = int(input())
array = []
for i in range(0,n):
	array.append(int(input()))
i=1
temp = []
subarray = []
temp.append(array[0])
while i!=n:
	if array[i]>temp[-1]:
		temp.append(array[i])
		i+=1
	else:
		subarray.append(temp)
		temp = [array[i]]
		i+=1
else:
	if array[i-1]>temp[-1]:
		temp.append(array[i])
	subarray.append(temp)

maxsum = min(array)
maxlength = 0
for sa in subarray:
	if len(sa)>=maxlength:
		temp = sum(sa)
		if temp>maxsum:
			maxsum = temp
			maxlength = len(sa)
print()
print(maxsum)