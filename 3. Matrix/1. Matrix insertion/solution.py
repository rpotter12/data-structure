t = int(input())
for i in range(t):
    m = int(input())
    n = int(input())
    a = []
    for i in range(0, m):
        temp = []
        for j in range(0, n):
            temp.append(int(input()))
        a.append(temp)
    for i in range(0, m):
        for j in range(0, n):
            print(a[i][j], end=' ')
        print()

