n = int(input())
array = []
for i in range(0,n):
	array.append(int(input()))
maxelement = max(array)
array.pop(array.index(maxelement))
nextmaxelement = max(array)
print()
print(maxelement*nextmaxelement)