if __name__ == '__main__':
    N = int(input())
    l1 = []
    for i in range(N):
        cmd = input().split()
        if cmd[0] == 'insert':
            l1.insert(int(cmd[1]), int(cmd[2]))
        if cmd[0] == 'print':
            print(l1)
        if cmd[0] == 'remove':
            l1.remove(int(cmd[1]))
        if cmd[0] == 'append':
            l1.append(int(cmd[1]))
        if cmd[0] == 'sort':
            l1.sort()
        if cmd[0] == 'pop':
            l1.pop()
        if cmd[0] == 'reverse':
            l1.reverse()
