import numpy
n=int(input())
a=[]
b=[]
c=[]
for i in range(0,n):
	a.append(int(input()))
	b.append(a[i])
for i in range(0,n):
	a.remove(a[0])
	res=numpy.product(a)
	c.append(res)
	a.append(b[i])
print(c)