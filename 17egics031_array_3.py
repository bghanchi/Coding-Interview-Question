def non_repeating(list,n):
    for i in range(n): 
        j = 0
        while(j < n): 
            if (i != j and list[i] == list[j]): 
                break
            j += 1
        if (j == n): 
            return list[i] 
      
    return -1


		
	
list=[]
n=int(input("Enter the size of array:"))
if n<=1000000:
    for i in range(n):
        item=int(input())
        list.append(item)
    print(list)
    
print("Non repeating element is :",non_repeating(list,n))
