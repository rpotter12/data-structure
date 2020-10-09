def display(a, l):
    if l<0:
        return
    display(a, l-1)
    print(a[l], end=' ')

t = int(input())
for i in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    for j in range(0, len(a)):
        a[j] = int(a[j])
    display(a, len(a)-1)
    print()
