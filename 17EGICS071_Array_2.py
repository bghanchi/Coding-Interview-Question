lst=[]
n=int(input("enter the no. of element"))
for x in range(n):
    num=int(input("enter element"))
    lst.append(num)
dict={}
for y in lst:
    if y in dict.keys():
        dict[y]+=1
    else:
        dict[y]=1
max_value = max(dict.values())
keys = [key  for (key, value) in dict.items() if value == max_value]
print(keys[0])
