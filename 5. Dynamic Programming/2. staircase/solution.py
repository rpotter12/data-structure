def stairs(n, a):
    if n<0:
        return 0
    elif n==0:
        a[n] = 1
    elif a[n] is None:
        a[n] = stairs(n-1, a)+stairs(n-2, a)+stairs(n-3, a)
    return a[n]

a = [None]*21
print(stairs(4, a))
