#Given an array of N integers, return the element which frequency are maximum.In        
#         cases, where frequencies are equal, you can print any element.

def maxFrequency(a):
    max=0
    for i in a:
        ct=a.count(i)
        if ct>max:
            max=ct
            num=i
    return num

print(maxFrequency([1,1,1,1,4,4,4,4,3,3]))