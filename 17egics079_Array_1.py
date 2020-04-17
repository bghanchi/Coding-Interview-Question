def maximumFrequency(arr):
  count = {}
  max_count = 0
  max_item = None

  for i in arr:
    if i not in count:
      count[i]=1
    else:
      count[i]+=1
    
    if count[i]>max_count:
      max_count=count[i]
      max_item=i
    return max_item

# [2,1,3,1,2,2,3,2,6,2,9]
# arrlist = [] 
# n = int(input("Enter number of elements : ")) 
# for i in range(0, n): 
#     ele = int(input()) 
#     arrlist.append(ele)

print("Output : ",maximumFrequency([2,1,3,1,2,2,3,2,6,2,9]))
