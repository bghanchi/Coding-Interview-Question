try:
    n = int(input("Enter Length of Array : "))
    arr = []
    print("Enter Array Elements :")
    for i in range(n):
        arr.append(int(input()))
    subseq = {}
    start = end = 0
    for i in range(len(arr)):
        if i and arr[i-1] >= arr[i]:
            start = end
            end = i
        if i == len(arr)-1:
            start = end
            end = len(arr)
        length = end - start
        if subseq.get(length):
            subseq[length] = max(subseq[length], sum(arr[start:end]))
        else:
            subseq[length] = sum(arr[start:end])           
    print("\nSum : ", subseq[max(subseq.keys())])
except:
    print("Please provide valid inputs!")
