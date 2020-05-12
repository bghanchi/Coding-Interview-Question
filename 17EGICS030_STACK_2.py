#Given two strings S and T, return if they are equal when both are typed into empty text editors. 
# means a backspace character.Note that after backspacing an empty text, the text will continue empty.

def strings(inp1,inp2):
    s1=[]
    s2=[]
    f1=True
    f2=True
    for i in inp1:
        if i == '#' and len(s1)==0:
            f1=False
        elif i == '#':
            s1.pop()
        else:
            s1.append(i)
    
    for i in inp2:
        if i == '#' and len(s2)==0:
            f2=False
        elif i == '#':
            s2.pop()
        else:
            s2.append(i)

    if (not(f1 and f2)) or s1==s2:
        return True
    else:
        return False 
    

inp1=input("Enter first input string: ")
inp2=input("Enter second input string: ")
print(strings(inp1,inp2))