# Write a program to print all the LEADERS in the array. An element is leader if it is greater 
#than all the elements to its right side. And the rightmost element is always a leader.

def leaders(arr):
    l=[arr[-1]]
    arr.reverse()
    for ele in arr:
        if ele>max(l):
            l.append(ele)
    l.reverse()
    return l
    # return l.append(ele for ele in reversed(arr) if ele>max(l))

size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input(" -"))
    arr.append(num)
    size=size-1
print("LEADERS ARE: ",end=" ") 
print(leaders(arr))