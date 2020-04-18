#Task 3
n = int(input())
array = []
feq = {}
for i in range(0,n):
	var = int(input())
	array.append(var)
	if var not in feq.keys():
		feq[var] = 1
	else:
		feq[var] += 1
key_list = list(feq.keys())
val_list = list(feq.values())
print()
print(key_list[val_list.index(1)])