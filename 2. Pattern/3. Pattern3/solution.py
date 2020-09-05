t = int(input())
for i in range(t):
    n = int(input())
    for i in range(n, 0, -1):
        for j in range(n-i):
            print('\t', end='')
        for k in range(i):
            print('*', end='	')
        print()
