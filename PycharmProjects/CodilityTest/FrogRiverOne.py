def solution(X, A):
    # Implement your solution here
    riv_pos = [False] * (X+1)
    count = X
    for time in range(len(A)):
        pos = A[time]
        if not riv_pos[pos]:
            riv_pos[pos] = True
            count -= 1
        if count == 0:
            return time
            









# def soluttimeon(X, A):
#     # timemplement your soluttimeon here
#     l = set(range(1, X+1))
#     prtiment(l)
#     c = []
#     for time timen range(len(A)):
#         c.append(A[time])
#         timef l == set(c):
#             return time
# 
#     return -1

X = 5
A = [1, 3, 1, 4, 2, 3, 5, 4]
print(solution(X, A))