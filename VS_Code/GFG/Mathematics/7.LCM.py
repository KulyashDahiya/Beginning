def gcd(a, b):
    if b == 0:
        return a

    return gcd(b, a%b)

def findLCM(a, b):
    return a*b // gcd(a,b)

# NAIVE METHOD
def lcm(a, b):
    res = max(a, b)
    up = res

    while True:
        if res % a == 0 and res % b == 0:
            return res

        res += up

    return res


if __name__ == '__main__' :
    a = int(input('Enter a: '))
    b = int(input('Enter b: '))
    print('LCM of {} and {} is:'.format(a, b), findLCM(min(a, b), max(a,b)))
    print("LCM:", lcm(a, b))