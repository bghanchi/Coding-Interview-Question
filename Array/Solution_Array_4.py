def RightShift(s,shift):
    return s[len(s)-int(shift%len(s)):]+s[:len(s)-int(shift%len(s))]

n=int(input())
String=input()
ShiftPosition=int(input())
print(RightShift(String,ShiftPosition))

#Time Complexity :- O(N)

    