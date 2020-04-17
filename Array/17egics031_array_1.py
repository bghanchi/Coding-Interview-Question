

def mostFrequent(arr, n): 

	
	arr.sort() 

	max_count = 1; res = arr[0]; curr_count = 1
	
	for i in range(1, n): 
		if (arr[i] == arr[i - 1]): 
			curr_count += 1
			
		else : 
			if (curr_count > max_count): 
				max_count = curr_count 
				res = arr[i - 1] 
			
			curr_count = 1
	
	
	if (curr_count > max_count): 
	
		max_count = curr_count 
		res = arr[n - 1] 
	
	return res 


arr = []
n = int(input("Enter number of elements : "))
for i in range(0, n): 
    ele = int(input()) 
    arr.append(ele)  
 
print(mostFrequent(arr, n)) 


