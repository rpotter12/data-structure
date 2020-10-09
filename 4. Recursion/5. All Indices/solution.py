def allindex(a, l, k):
    if l<0:
        return
    allindex(a, l-1, k)
    if a[l]==k:
        print(l, end=' ')

t = int(input())
for i in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    for j in range(0, len(a)):
        a[j] =int(a[j])
    k = int(input())
    allindex(a, len(a)-1, k)
    print()
