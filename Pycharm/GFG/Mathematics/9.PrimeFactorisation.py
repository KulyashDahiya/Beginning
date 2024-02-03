import time

def convertMillis(mil):
    seconds=(mil/1000)%60
    return seconds

def isprime(n):
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

def printPFactor(n):
    primeFactors = []
    for i in range(2, (n+2)//2):
        if isprime(i):
            x = i
            while n % x == 0:
                primeFactors.append(i)
                x *= i
    print(primeFactors)


n = int(input("Enter n: "))
start = convertMillis(time.time())
printPFactor(n)
end = convertMillis(time.time())
print("Time Execution: ", (end - start) * 10 ** 3, "seconds")