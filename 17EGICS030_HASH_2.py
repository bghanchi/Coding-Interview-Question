#Given an array of integers, return the number of pairs such that they add up to a specific target.
#You may assume that each input would have exactly one solution, and you may not use the same element twice.

#LOGIC
def pair(arr,t):
    pairs=set()
    flag=True
    while flag:
        for ele in arr:
            if ele<t and (t-ele in arr):
                a1=ele
                a2=t-ele
                pairs.add((a1,a2))
                arr.remove(a1)
                arr.remove(a2)
                break
            else:
                arr.remove(ele)
                break
        if len(arr)<2:
            flag=False
    print("PAIRS ARE: ",pairs)
    return len(pairs)
            
#INPUT
size=int(input(("Enter the size of array: ")))
t=int(input("Enter target value: "))
arr=[]

for i in range(size):
    num=int(input())
    arr.append(num)

print("Number of pairs: ",pair(arr,t))