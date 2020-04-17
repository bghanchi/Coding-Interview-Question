try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    res = max(set(arr), key = arr.count) 
    print("\nMax. Frequency Element : ", res)
except:
    print("Please provide valid inputs!")