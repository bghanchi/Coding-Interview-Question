#Given a pattern and a string str, find if str follows the same pattern.
#Here follow means a full match, such that there is a bijection between a 
# letter in pattern and a non-empty word in str.

def compare(pattern,strng):
    p=[ch for ch in pattern]
    s=list(strng.split(' '))
    if len(p)!=len(s):
        return False

    com=dict()
    f=True
    
    for i,j in zip(p,s):
        if i not in com.keys():
            com[i]=j
        elif i in com.keys() and j != com[i]:
            f=False
            return False
        elif p.index(i)==len(p)-1 or s.index(j)==len(p)-1:
            return False
        else:
            continue
    if f:
        return True

pattern=input("Enter pattern: ")
strng=input("Enter string: ")

print(compare(pattern,strng))