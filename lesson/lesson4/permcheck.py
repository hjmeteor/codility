def solution(A):
    # write your code in Python 2.7
    len_a = len(A)
    a = [False] * len_a
    for n in range(len_a):
        if A[n] > len_a:
            return 0
        elif A[n] < len_a and a[A[n] - 1] == True:
            return 0
        elif A[n] < len_a and a[A[n] - 1] == False:
            a[A[n] - 1] = True
    return 1
    pass
