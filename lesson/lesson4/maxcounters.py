def solution(N, A):
    # write your code in Python 2.7
    n = [0] * N
    max = 0
    for a in range(len(A)):
        if A[a] <= N and A[a] >= 1:
            n[A[a] - 1] += 1
            if n[A[a] - 1] > max:
                max = n[A[a] - 1]
        elif A[a] == N + 1:
            n = [max] * N
    return n
    pass
