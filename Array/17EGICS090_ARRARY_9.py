#Task 9
#Requires python 3.8 and up
from math import prod
arr = list(map(int,input().split()))
N = len(arr)
product = []

for i in range(0,N):
	temp = arr[:i]+arr[i+1:]
	mul = prod(temp)
	product.append(mul)
	
print(product)