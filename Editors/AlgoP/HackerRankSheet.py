def staircase(n):
    for i in range(1, n+1):
        s = "#" * i
        print(s.rjust(n))

    # for i in range(1, n+1, 1):
    #     for j in range(n, 1, -1):
    #         print(" ", end="")
    #     for k in range(i, n+1, 1):
    #         print("#", end="")
    #     print("\n")

if __name__ == '__main__':
    n = int(input())

    staircase(n)