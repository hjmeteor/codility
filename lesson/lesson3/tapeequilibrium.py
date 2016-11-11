def solution(A):
    # write your code in Python 2.7
    sum1 = 0
    sum2 = 0
    diff = None
    sumto = 0
    for n in range(len(A)):
        sumto += A[n]
    for p in range(1, len(A)):
        sum1 += A[p - 1]
        sum2 = sumto - sum1
        difftemp = abs(sum1 - sum2)
        if diff is not None:
            if difftemp < diff:
                diff = difftemp
        elif diff is None:
            diff = difftemp
    return diff
    pass


print(solution([3, 1, 2, 4, 3]))
