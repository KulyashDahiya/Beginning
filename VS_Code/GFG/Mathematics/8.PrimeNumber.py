# Check for Prime
# naive

def isprime(n):
    if n == 1:
        return False
    i = 2
    while (i * i <= n):
        if n % i == 0:
            return False
        i += 1
    return True


# Efficient

def isprimeE(n):
    if n == 1:
        return False

    if n == 2 or n == 3:
        return True

    if n % 2 == 0 or n % 3 == 0:
        return False

    i = 5
    while (i * i <= n):
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6

    return True

n = 7
print(isprimeE(n))