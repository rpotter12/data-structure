t = int(input())
for i in range(t):
    n = int(input())
    half = (n+1)//2
    for i in range(1, n+1, 2):
        for j in range(1, half):
            print('\t', end='')
        for j in range(i):
            print('*', end='\t')
        half -= 1
        print()
    half = 2
    for i in range(n-2, 0, -2):
        for j in range(1, half):
            print('\t', end='')
        for j in range(i):
            print('*', end='\t')
        half += 1
        print()
