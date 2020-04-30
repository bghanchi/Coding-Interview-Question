try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    res = max(arr)
    if arr.count(res) > 1:
        print("\nProduct : ", res * res)
    else:
        arr = list(filter(res.__ne__, arr))
        print("\nProduct : ", res * max(arr))
except:
    print("Please provide valid inputs!")