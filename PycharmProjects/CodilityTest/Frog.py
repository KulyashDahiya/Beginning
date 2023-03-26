def solution(X, Y, D):
    if (Y-X)%D != 0:
        return (Y-X)//D + 1
    else:
        return (Y-X)//D


X = 10
Y = 85
D = 30
print(solution(X, Y, D))