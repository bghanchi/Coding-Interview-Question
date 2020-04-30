#Task 8
arr = list(map(int,input().split()))
N = len(arr)
def combination(arr, num_element, last=False):
    if num_element == 0:
        yield []
    if 0 < num_element <= len(arr):
        first, *rest = arr
        if not last:
            for c in combination(rest, num_element-1, True):
                yield [first] + c
        for c in combination(rest, num_element, False):
            yield c

maximum = arr[0]
for i in range(1,N):
	for val in combination(arr,i):
		if sum(val)>maximum:
			maximum = sum(val)

print(maximum)