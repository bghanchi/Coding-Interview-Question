#Given a character array of size N. You have to perform the right shift by s places.
def rightShift(arr,rt):
    while rt != 0:
        p=arr.pop()
        arr.insert(0,p)
        rt=rt-1
    return arr

size=int(input(("Enter the size of array: ")))
s=size
arr=[]
while size != 0:
    c=input()
    arr.append(c)
    size=size-1
rt=int(input("Enter the number of right shifts to be done: "))
print("AFTER PERFORMING RIGHT SHIFT, ARRAY BECOMES: ")
print("".join(rightShift(arr,rt)))