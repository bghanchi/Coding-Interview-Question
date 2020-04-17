a = [] 
n = int(input("Enter number of elements : ")) 
for i in range(0, n): 
    k = int(input()) 
    a.append(k)      
print(a) 
a2=[]
a1=[]
for i in range(0,len(a)):
    if i >= len(a)/2:
       a2.append(a[i])
    else:
       a1.append(a[i])
print(a1)
print(a2)
sum1=0
for i in range(0,len(a1)):
    sum1=sum1+ a1[i]
sum2=0
for i in range(0,len(a2)):
    sum2= sum2+a2[i]

if sum1>sum2:
    print(sum2)
else:
    print(sum1)
 
