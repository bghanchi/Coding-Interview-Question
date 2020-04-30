n=int(input())
test=[]
for i in range(0,n):
	test.append(input())
s=int(input())
n_test=[]
for i in range(n):
	if (i+s)<n:
		n_test.insert(i+s,test[i])
	else:
		n_test.insert((s+i)%n,test[i])
print("".join(n_test))
