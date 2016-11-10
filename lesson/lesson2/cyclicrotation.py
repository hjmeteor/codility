def solution(A, K):
    # write your code in Python 2.7
    if A != []:
        temp = 0
        for k in range(K):
            temp = A[-1]
            for n in range(len(A) - 2, -1, -1):
                A[n + 1] = A[n]
            A[0] = temp
        return A
    else:
        return A
    pass
