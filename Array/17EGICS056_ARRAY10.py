i = 0

print("list of items is", items)

n = int(input("enter size of array:")) 

for i in range(n):
	int(input("enter element:")) 

x = int(input("enter item to search:"))
 
while i < len(items):
	if items[i] == x:
		print("item found at position:", i + 1)
		break
	elif items[i] < x & x < items[i+1]:
		print("item should be at position:", i + 1)
		break

	i = i + 1
