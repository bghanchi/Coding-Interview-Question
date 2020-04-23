try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    sum1 = arr[0]
    sum2 = 0
    for i in range(1, len(arr)):
        sum3 = max(sum1, sum2)
        sum1 = arr[i] + sum2
        sum2 = sum3
    print("\nMaximum Sum :", max(sum1, sum2))
except:
    print("Please provide valid inputs!")