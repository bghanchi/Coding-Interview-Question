#2 Answer
s,s1=0,0
n = int(input())
list = []
for i in range(0,n):
	list.append(int(input()))
for i in range(0,n):
    if i<(n/2):
        s=s+list[i]
    else:
        s1=s1+list[i]
print()       
if(s<s1):
    print(s)
else:
    print(s1)
