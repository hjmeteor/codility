def solution(A):
    A.sort()
    triangle = [0] * 3
    flag = 0
    for a in A:
        triangle[0], triangle[1], triangle[2] = triangle[1], triangle[2], a
        if triangle[0] + triangle[1] > triangle[2] and triangle[1] + triangle[2] > triangle[0] and triangle[0] + triangle[2] > triangle[1]:
            return 1
    return 0
