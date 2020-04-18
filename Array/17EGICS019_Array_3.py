try:
    n = int(input("Enter Length of Array : "))
    if n%2 != 0:
        arr = []
        print("Enter Array Elements :")
        for i in range(n):
            arr.append(int(input()))
        for i in arr:
            if arr.count(i) == 1:
                print("\nNon-Repeating Element : ", i)
                break
            if arr.count(i) > 2:
                print("\nPlease check your array input!")
                break
    else:
        print("n must be an odd number!")
except:
    print("Please provide valid inputs!")