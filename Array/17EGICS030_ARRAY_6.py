#Given an array of size N. Find two elements from the array whose product is maximum.

#LOGIC
def maxProduct(arr):
    max1=max(arr)
    arr.remove(max1)
    max2=max(arr)
    return max1*max2

#INPUT CODE
size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    num=int(input("-"))
    arr.append(num)
    size=size-1
print("MAXIMUM PRODUCT IS: ",maxProduct(arr))