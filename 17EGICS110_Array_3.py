n = int(input())
test=[]
for i in range(0,n):
    test.append(int(input()))
dict={}
for i in test:
    dict[i] = test.count(i)
for i in dict:
	if dict[i]==1:
		print(i)
