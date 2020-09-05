t = int(input())
for i in range(t):
    n = int(input())
    for i in range(n):
        for j in range(i):
            print('\t', end='')
        print('*')
