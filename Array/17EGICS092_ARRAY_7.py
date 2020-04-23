n = int(input())
a = []
c = 0
for i in range(n):
	a.append(int(input()))
for i in range(0,n):
	for j in range(i+1,n):
		if a[i]>a[j]:
			c+=1
		else:
			c=0
			break

	if c!=0:
		print(a[i])
		c=0

print(a[n-1])