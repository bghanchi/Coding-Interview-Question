#Task 4
n = int(input())
data = list(input())
s = int(input())
new_arr = []
for i in range(0,n):
	new_arr.insert((i+s)%(n),data[i])
print()
print("".join(new_arr))