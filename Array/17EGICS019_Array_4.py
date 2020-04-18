try:
    n = int(input("Enter Length of Array : "))
    arr = input("Enter Array of Charancters : ")
    if len(arr) == n:
        s = int(input("Right Shift by : "))
        for i in range(s):
            arr = arr[-1:] + arr[:-1]
        print("\nArray after %d Right Shift(s) : %s" %(s, arr))
    else:
        print("Please check the length of array!")
except:
    print("Please provide valid inputs!")