def solution(N):
    binary = bin(N)
    gap = 0
    maxGap = 0
    for bi in binary[2:]:
        if bi == '1':
            if maxGap < gap:
                maxGap = gap
            gap = 0
        else:
            gap += 1
    return maxGap


print(solution(1041))
