def solution(N):
    binary = bin(N)
    # print(binary)
    gap = 0
    maxGap = 0
    for bi in binary[2:]:
        # print(bi)
        if bi == '1':
            if maxGap < gap:
                maxGap = gap
                print(maxGap)
            gap = 0
        else:
            gap += 1
            print(gap)
    return maxGap


print(solution(1041))
