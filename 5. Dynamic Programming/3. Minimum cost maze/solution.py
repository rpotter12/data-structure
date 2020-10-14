def mincost(a, m, n):
    dp = [[0 for x in range(3)] for x in range(3)]
    
    dp[0][0] = a[0][0]
    
    for i in range(1, m+1):
        dp[i][0] = dp[i-1][0] + a[i][0]
    
    for j in range(1, n+1):
        dp[0][j] = dp[0][j-1] + a[0][j]
    
    for i in range(1, m+1):
        for j in range(1, n+1):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j-1]
    
    return dp[m][n]

a = [[1,1,2],
    [2,4,2],
    [1,1,1]]
print(mincost(a, 2, 2))
