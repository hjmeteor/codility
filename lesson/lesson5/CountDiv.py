def solution(A, B, K):
    result = 0
    inter = B - A + 1
    remainder = inter % K
    result = inter / K
    for n in xrange(remainder):
        if (A + n) % K == 0:
            result = inter / K + 1
    return result

def solution2(A, B, K):
    result = 0
    inter = B - A + 1
    remainder = inter % K
    result = inter / K
    if A % K + remainder > K and A % K != 0:
        result = inter / K + 1
    if A % K == 0 and remainder != 0:
        result = inter / K + 1
    return result
