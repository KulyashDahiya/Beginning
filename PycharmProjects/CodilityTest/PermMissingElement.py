def solution(A):
    n = int(len(A))
    return (( (n+1)*(n+2) )//2) - sum(A)


A = [2,3,1,5]
print((solution(A)))