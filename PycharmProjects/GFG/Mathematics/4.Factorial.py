## WITH RECURSION

def factR(n):
    if n == 0 or n == 1:
        return 1

    return n * factR(n-1)

## WITHOUT RECURSION

def fact(n):
    res = 1
    for i in range(2, n+1):
        res *= i

    return res


if __name__ == '__main__' :
    number = 5
    print('Using Recursion:', factR(number))
    print(fact(number))