def solution(A):
    pair = {}
    for n in range(len(A)):
        a = str(A[n])
        if a in pair:
            pair.pop(a)
        else:
            pair[a] = 1
    solution = pair.keys()[-1]
    return int(solution)


print(solution([9, 3, 9, 3, 9, 7, 9]))
