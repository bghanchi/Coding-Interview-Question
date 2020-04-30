n = int(input())
array = []
for i in range(0,n):
    array.append(int(input()))
addition1 = array[0]
addition2 = 0
for i in range(1, len(array)):
    temp = max(addition1, addition2)

    addition1 = array[i] + addition2

    addition2 = temp
    
print(max(addition1, addition2))