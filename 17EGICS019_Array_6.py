try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    res = max(arr)
    arr = list(filter(res.__ne__, arr)) 
    print("\nProduct : ", res * max(arr))
except:
    print("Please provide valid inputs!")