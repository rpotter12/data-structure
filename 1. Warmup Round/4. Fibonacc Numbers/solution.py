t = int(input())
for i in range(t):
    n = int(input())
    temp = [0,1]
    if n==1:
        print(0, end=' ')
    elif n==2:
        print(0, end=' ')
        print(1, end=' ')
    else:
        print(0, end=' ')
        print(1, end=' ')
        for i in range(3, n+1):
            temp.append(temp[-1]+temp[-2])
            print(temp[-1], end=' ')
    print()
