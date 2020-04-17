list=[]
n=int(input("Enter the size of array: "))
mid=int(n/2)
sum1=0
sum2=mid+1
if (n<=1000000 and n%2==0):
    for i in range(0,n):
        item=int(input())
        list.append(item)
    print(list)
    for i in range(0,mid):
        sum1+=list[i]
    print("Sum of the list 1: ",sum1)
    for i in range(mid+1,n):
        sum2+=list[i]
    print("Sum of list 2: ",sum2)
    if sum1<sum2:
        print("Minimum Sum is: ",sum1)
    else:
        print("Minimum Sum is :",sum2)
        


    

