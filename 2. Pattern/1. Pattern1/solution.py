t = int(input())
for i in range(t):
    n = int(input())
    for i in range(1,n+1):
        for i in range(i):
            print('*', end='\t')
        print()
