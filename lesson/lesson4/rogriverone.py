def solution(X, A):
    # write your code in Python 2.7
    len_a = len(A)
    a = [-1] * X
    last = 0
    for n in range(len_a):
        if a[A[n] - 1] == -1:
            a[A[n] - 1] = n
    for m in range(X):
        if a[m] == -1:
            return -1
        elif a[m] > last:
            last = a[m]
    return last
    pass
