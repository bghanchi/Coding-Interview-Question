list=[]
n=int(input("Enter the size:"))
maxi=0
for i in range(n):
    ele=int(input())
    list.append(ele)
inc=0
exc=0
for i in range(n):
    if exc > inc:
        new_exc = exc
    else:
        new_exc = inc
    inc = exc + list[i]
    exc = new_exc
if exc > inc:
    print (exc)
else:
    print (inc)