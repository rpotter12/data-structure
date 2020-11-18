def isprime(n):
    if n==2:
        return True
    elif n<=1 or n%2==0:
        return False
    else:
        for i in range(3,(n//2)+1):
            if n%i==0:
                return False
    return True

t = int(input())
for i in range(t):
    n = int(input())
    if(isprime(n)):
        print("prime")
    else:
        print("not prime")
