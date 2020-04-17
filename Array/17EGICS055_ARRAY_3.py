def CountFrequency(ls):
    freq = {}
    for item in ls:
        if (item in freq):
            freq[item] += 1
        else:
            freq[item] = 1
    res = min(freq,key=freq.get)
    print(res)
n=int(input())
ls=[]
for i in range(0,n):
    i=int(input())
    ls.append(i)
CountFrequency(ls)
