#1 Answer
n = int(input())
test_list = []
for i in range(0,n):
	test_list.append(int(input()))
max = 0
res = test_list[0] 
for i in test_list: 
    freq = test_list.count(i) 
    if freq > max: 
        max = freq 
        res = i 
print ("\n"+str(res)) 
