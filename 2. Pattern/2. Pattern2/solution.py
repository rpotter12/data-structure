t = int(input())
for i in range(t):
    n = int(input())
    for i in range(n, 0, -1):
        for i in range(i):
            print('*', end='\t')
        print()
