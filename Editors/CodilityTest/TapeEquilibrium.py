def solution(A):
    s = sum(A)
    left = 0
    mini = float('inf')
    for i in A:
        left += i
        mini = min( abs(s-2*left) , mini)
    return mini







# def solution(A):
#     n = len(A)
#     lis = []
#     if len(A) == 2:
#         return abs(A[0]-A[1])
#     for i in range(1, n+1):
#         suml = sum(A[:i])
#         sumr = sum(A[i:])
#         d = abs(suml-sumr)
#         lis.append(d)
#
#     return min(lis)




# from itertools import accumulate
# def solution(A):
#     # Implement your solution here
#     sum_arr = sum(A)
#     acuumulated_arr = accumulate(A[:-1])
#     return min([abs(2*x - sum_arr) for x in acuumulated_arr] )
