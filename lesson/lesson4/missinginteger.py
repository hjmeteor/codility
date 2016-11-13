def solution(A):
    # write your code in Python 2.7
    len_a = len(A)
    a = [False] * (len_a + 1)
    for n in range(len_a):
        if A[n] > 0 and A[n] <= len_a and a[A[n] - 1] == False:
            a[A[n] - 1] = True
    for m in range(len(a)):
        if a[m] == False:
            return m + 1
    pass
