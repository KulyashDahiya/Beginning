def countDigit(x):
    res = 0
    while x>0:
        x = x//10
        res += 1

    return res


if __name__ == '__main__':
    number = int(input('Enter a number: '))
    digits = countDigit(number)
    print('There are {} digits in the number'.format(digits))