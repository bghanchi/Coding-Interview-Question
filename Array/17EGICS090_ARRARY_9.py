#Task 9
#Requires python 3.8 and up
from math import prod
from itertools import compress
arr = list(map(int,input().split()))
N = len(arr)
product = []
for i in range(0,N):
	mask = [1]*N
	mask[i]=0
	mul = prod(list(compress(arr,mask)))
	product.append(mul)
	
print(product)