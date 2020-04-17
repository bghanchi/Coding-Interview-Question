def shiftfun(str,shift):
    s1 = str[0:shift]
    s2 = str[shift:]
    result = s2 + s1
    print(result)

str=input()
length = len(str)
s = int(input())
shift = s % length 
print(length,shift)
shiftfun(str,shift)
