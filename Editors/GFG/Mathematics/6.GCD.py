## METHOD 1
def findGCD(a, b):
    mini = min(a, b)
    maxi = max(a, b)
    gcd = 1
    if maxi % mini == 0:
        return mini
    else:
        for r in range(2, mini):
            if a % r == 0 and b % r == 0:
                gcd = r
            else:
                continue

        return gcd

## Euclidean Method
def gcd(a, b):
    while a != b:
        if a > b:
            a = a-b
        else:
            b = b-a
    return a

## Euclidean Method Optimised
def gcdE(a, b):
    if b == 0:
        return a

    return gcd(b, a%b)

if __name__ == '__main__' :
    a = int(input('Enter a: '))
    b = int(input('Enter b: '))
    #print('GCD of {} and {} is:'.format(a, b), findGCD(a, b)) #Using Method 1
    print(gcdE(min(a, b), max(a,b)))