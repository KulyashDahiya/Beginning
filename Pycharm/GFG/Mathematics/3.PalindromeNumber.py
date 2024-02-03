def isPal(x):
    orig = x
    rev = 0
    while x != 0:
        rd = x % 10
        rev = rev * 10 + rd
        x //= 10

    return rev == orig



if __name__ == '__main__':
    number = 545
    print(isPal(number))