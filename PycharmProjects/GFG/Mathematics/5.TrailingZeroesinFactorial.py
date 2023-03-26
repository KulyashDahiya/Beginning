
def countTraillingZero(n):

    res = 0
    while n >=5:
        n //= 5
        res += n

    return res

if __name__ == '__main__' :
    number = 251
    print('No. of Trailing Zeroes in Factorial of {} are:'.format(number), countTraillingZero(number))
