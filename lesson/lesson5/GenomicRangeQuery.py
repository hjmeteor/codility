def solution(S, P, Q):
    len_s = len(S)
    len_query = len(P)
    result = [0] * len_query
    s = 0
    prefix = [[0 for n in xrange(4)] for n in xrange(len_s + 1)]
    for n in xrange(1, len_s + 1):
        if S[n - 1] == 'A':
            s = 1
        elif S[n - 1] == 'C':
            s = 2
        elif S[n - 1] == 'G':
            s = 3
        elif S[n - 1] == 'T':
            s = 4
        for m in xrange(4):
            prefix[n][m] = prefix[n - 1][m]
            if m == s - 1:
                prefix[n][m] = prefix[n - 1][m] + 1

    for m in xrange(len_query):
        left = P[m]
        right = Q[m]
        length = right - left + 1
        result_sum = [0] * 4
        for n in xrange(4):
            result_sum[n] = prefix[right + 1][n] - prefix[left][n]
        for n in xrange(4):
            if result_sum[n]:
                result[m] = n + 1
                break
    return result
