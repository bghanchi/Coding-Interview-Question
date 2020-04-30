import math
str = ""
size = int(input("Enter the size"))
str = input('Enter a String: ')
s= int(input("How many time you want to shift  "))
print("Before Shifting",str)
if(len(str) != 0):
    if(1<size or size<pow(10,6)):
        for d in range(s):
            str = str[size-1] + str[:size-1]
    
    print("After Shifting",str)
else:
    print("string is empty")
        
