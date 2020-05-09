list=[]
n=int(input("Enter the size:"))
for i in range(n):
    ele=int(input())
    list.append(ele)
right = list[n-1]
print ("Leaders are: " ,right)
for i in range(n-2,0,-1):
	if right<list[i]:
		print ("LEaders are: " ,list[i])
		right=list[i]
