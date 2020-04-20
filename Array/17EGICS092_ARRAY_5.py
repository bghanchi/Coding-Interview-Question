n=int(input())
a=[]
dict={}
sum,c=0,0
for i in range(n):
	a.append(int(input()))
for i in range(0,n):
	if i<(n-1):
		if a[i]<a[i+1]:
			sum=sum+a[i]
			c+=1
		else:
			sum=sum+a[i]
			c+=1
			dict[sum]=c
			sum,c=0,0
	else:
		sum=sum+a[i]
		c+=1
		dict[sum]=c

maxlength = 0
maxsum = min(dict)
for x in dict:
	if dict[x]>=maxlength:
		maxlength = dict[x]
		if x>maxsum:
			maxsum = x

print("\n"+str(maxsum))
