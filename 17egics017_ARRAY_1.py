list = [1,2,1,4,4,2,1,4,1,5,4,8] 
  
max = 0
result = list[0] 
for i in list: 
    freq = list.count(i) 
    if freq > max: 
        max = freq 
        result = i 
      
print ("list: " +str(list)) 
print ("number which has maximum frequency : " + str(result))
