#Given an integer array arr, count element x such that x + 1 is also in arr.
#If there are duplicates in arr, count them separately.

#LOGIC
def elements(ele,arr):
    count=0
    for e in ele:
        count+=arr.count(e)
    return count

#INPUT
size=int(input(("Enter the size of array: ")))
arr=[]

ele=set()
for i in range(size):
    num=int(input())
    arr.append(num)
    if num-1 in arr:
        ele.add(num-1)
print("Number of elements: ",elements(ele,arr))