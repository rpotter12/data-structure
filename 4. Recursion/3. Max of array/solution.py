t = int(input())
for i in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    for j in range(0, len(a)):
        a[j] = int(a[j])
    print(max(a))
