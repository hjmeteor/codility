def solution(A):
    avg = 0.0
    result = 0
    min = (A[0] + A[1]) / 2.
    a_len = len(A)
    if a_len == 2:
        return 0
    else:
        for n in xrange(2, len(A)):
            avg =  (A[n] + A[n - 1] + A[n - 2]) / 3.
            if avg < min:
                min = avg
                result = n - 2
            avg = (A[n] + A[n - 1]) / 2.
            if avg < min:
                min = avg
                result = n - 1
    return result

def solution2(A):
    avg = 0.0
    result = 0
    min = (A[0] + A[1]) / 2.
    a_len = len(A)
    B = [0] * (a_len + 1)

    for n in xrange(1, a_len + 1):
        B[n] = B[n - 1] + A[n - 1]

    if a_len == 2:
        return 0
    else:
        for n in xrange(3, a_len + 1):
            avg =  (B[n] - B[n - 3]) / 3.
            if avg < min:
                min = avg
                result = n - 3
            avg = (B[n] - B[n - 2]) / 2.
            if avg < min:
                min = avg
                result = n - 2
    return result
