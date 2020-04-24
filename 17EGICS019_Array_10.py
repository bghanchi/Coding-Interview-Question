try:
    n = int(input("Enter Length of Array : "))
    arr = []
    t = int(input("Enter the target element : "))
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    if t < arr[0]:
        res = 0
    else:
        for i in range(n):
            if arr[i] == t or (i and arr[i] > t and arr[i-1] < t):
                res = i
                break
    print("\nIndex :", res)
except:
    print("Please provide valid inputs!")