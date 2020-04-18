list1=[]
list2=[]
list3=[]
len=1
a=0
n=int(input("enter number of elements"))
for i in range(0,n):
    m=int(input("enter the array element"))
    list1.append(m)
t=list1[0]
sum=list1[0]
for j in range(1,n):
    if list1[j-1]<list1[j]:
        sum=sum+list1[j]
        len=len+1
    else:
        if(a<len):
            a=len
            t=sum
        sum=list1[j]
        len=1

if len>a:
	t=sum
  
print(t)