def solution(A):
    num_pair = 0
    current = 0
    a_len = len(A)
    for n in xrange(a_len):
        if A[n] == 1:
            num_pair += n - current
        current = current + A[n]
    if num_pair > 1000000000:
        return -1
    else:
        return num_pair
