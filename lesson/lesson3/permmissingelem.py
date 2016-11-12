def solution(A):
    # write your code in Python 2.7
    a = [0] * 1000000
    for n in A:
        a[n - 1] = 1
    for m in range(len(a)):
        if a[m] == 0:
            return m + 1
    pass
