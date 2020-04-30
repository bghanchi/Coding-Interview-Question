#Task 10
n=int(input())
t=int(input())
array = list(map(int, input().split()))
for i in range(0,n):
	if array[i]==t:
		print(i)
		break
	elif array[i]>t:
		print(i)
		break
	elif i==n-1:
	    print(n)
	    break
