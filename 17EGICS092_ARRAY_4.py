n = int(input())
inputarray = list(input())
s = int(input())
newarray = []
i = 0
while i<n:
	index = (i+s)%n
	newarray.insert(index,inputarray[i])
	i+=1
print("".join(newarray))