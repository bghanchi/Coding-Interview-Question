try:
    n = int(input("Enter Length of Array : "))
    if n%2 == 0:
        arr = []
        print("Enter Array Elements :")
        for i in range(n):
            arr.append(int(input()))
        print("\nMinimum Sum Value : ", min(sum(arr[:(len(arr)//2)]), sum(arr[(len(arr)//2):])))
    else:
        print("n must be an even number!")
except:
    print("Please provide valid inputs!")