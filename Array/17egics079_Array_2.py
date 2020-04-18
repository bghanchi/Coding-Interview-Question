arr = [9,18,7,8,1,9]
fpart = arr[0:int(len(arr)/2)]
spart = arr[int(len(arr)/2):]
fsum, ssum = 0,0

for i in range(0, len(fpart)):    
   fsum = fsum + fpart[i];    
for j in range(0, len(spart)):
  ssum = ssum + spart[i];    

resList = [fsum,ssum]
print("Sum of both array list Ex.[sumOfArr1,sumOfArr2] :",resList)
print("Minimum value in list :",min(resList))
