def lastindex(a, l, k):
    if l<0:
        return
    if a[l]==k:
        print(l)
        return
    lastindex(a, l-1, k)

t = int(input())
for i in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    for j in range(0, len(a)):
        a[j] =int(a[j])
    k = int(input())
    lastindex(a, len(a)-1, k)
