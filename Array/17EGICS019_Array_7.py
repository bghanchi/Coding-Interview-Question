try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    res = []
    for i in range(0, len(arr)-1):
        if arr[i] > max(arr[i+1:]):
            res.append(str(arr[i])) 
    res.append(str(arr[-1]))
    print("\nLEADERS are", ', '.join(res))
except:
    print("Please provide valid inputs!")