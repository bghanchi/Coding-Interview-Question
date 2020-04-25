try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    maximum, continuous = 0, 0
    for i in range(len(arr)):
        if continuous + arr[i] > 0:
            continuous += arr[i]
            if continuous > maximum:
                maximum = continuous
        else:
            continuous = 0
            i += 1
    print("\nSum :", maximum)
except:
    print("Please provide valid inputs!")