def SelectionSort(A):
    n = len(A)
    for i in xrange(n):
        minimal = i
        for j in xrange(i + 1, n):
            if A[j] < A[minimal]:
                minimal = j
        A[i], A[minimal] = A[minimal], A[i]
    return A

def CountingSort(A, K):
    n = len(A)
    count = [0] * (K + 1)
    for i in xrange(n):
        count[A[i]] += 1
    p = 0
    for i in xrange(K + 1):
        for j in xrange(count[i]):
            A[p] = i
            p += 1
    return A
