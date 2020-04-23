try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    prod = [1] * n
    t = 1
    for i in range(n):
        prod[i] = t
        t *= arr[i]
    t = 1
    for i in range(n-1, -1, -1):
        prod[i] *= t
        t *= arr[i]
    print("\nProduct Array : ", prod)
except:
    print("Please provide valid inputs!")