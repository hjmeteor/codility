def solution(A):
    A.sort()
    result = A[-1] * A[-2] * A[-3]
    result2 = A[0] * A[1] * A[-1]
    if  result2 > result:
        return result2
    return result
