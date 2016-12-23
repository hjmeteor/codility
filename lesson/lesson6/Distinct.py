def solution(A):
    pre = -1
    result = 0
    A.sort()
    for a in A:
        if a != pre:
            result += 1
        pre = a
    return result
