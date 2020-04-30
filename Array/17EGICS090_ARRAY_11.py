#Task 11
n=int(input())
array = list(map(int, input().split()))
maximum = min(array)

for i in array:
	total = i
	for j in array[array.index(i)+1:]:
		total+=j
		if total>maximum:
			maximum=total

print(maximum)