# Method name: Sieve of Eratosthenes
# time complexity: O(n)

def primes(l, n):
    prime = [True for i in range(n+1)]

    p = 2
    while(p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    for p in range(l, n+1):
        if prime[p]:
            print(p, end=' ')

t = int(input())
for t in range(t):
    s = int(input())
    n = int(input())
    primes(s, n)
    print()
