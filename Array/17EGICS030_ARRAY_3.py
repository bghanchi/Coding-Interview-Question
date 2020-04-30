#Given an array of N integers, every element appears twice except for one .
#Print the non repeating element .
def nonRepeating(arr):
    for i in arr:
        if arr.count(i)<2:
            return i

size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input())
    arr.append(num)
    size=size-1
print("NON REPEATING ELEMENT IS ",nonRepeating(arr))