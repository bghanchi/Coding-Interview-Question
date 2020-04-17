#Task 1
n = int(input())
array = []
feq = [0]*10
for i in range(0,n):
	array.append(int(input()))
	feq[array[i]]+=1
maxfeq = max(feq)
print("\n"+str(feq.index(maxfeq)))