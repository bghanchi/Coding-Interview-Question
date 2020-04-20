n=int(input())
a=[]
for i in range(0,n):
	a.append(int(input()))
m=max(a)
a.remove(m)
n=max(a)
print(m*n)
