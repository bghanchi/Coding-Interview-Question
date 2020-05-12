# Given a string containing just the characters '(', ')' determine if the input string is valid or not.
# An input string is valid if:
# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.

def stack(inp):
    if len(inp)==0:
        return True
    stack=[]
    for i in inp:
        if i == '(':
            stack.append('x')
        elif i == ')' and len(stack)==0:
            return False
        elif i == ')':
            stack.pop()
        else:
            continue

    if len(stack) != 0:
        return False
    else:
        return True


inp=input("Enter the input string: ")
print(stack(inp))