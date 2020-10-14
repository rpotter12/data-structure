def Fibo(n, a):
    if n==0 or n==1:
        a[n] = n
    elif a[n] is None:
        a[n] = Fibo(n-1, a)+Fibo(n-2, a)
    return a[n]

a = [None]*45
print(Fibo(10, a))
