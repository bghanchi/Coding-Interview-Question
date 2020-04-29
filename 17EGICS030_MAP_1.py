#Given an array of integers, find if the array contains any duplicates.
#Your function should return true if any value appears at least twice in the array, 
# and it should return false if every element is distinct.

size=int(input(("Enter the size of array: ")))
print("Enter elemnts: ")

d=dict()
flag=False

for i in range(size):
    num=int(input())
    if num not in d:
        d[num]=1
    else:
        d[num]+=1
        flag=True

print("RESULT OF DUPLICACY: ",flag)