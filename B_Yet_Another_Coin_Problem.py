t = int(input())

for _ in range(t):
    n = int(input())
    dp = [float('inf')] * (n + 1)
    dp[0] = 0
    coins = [1, 3, 6, 10, 15]
    for coin in coins:
        for i in range(coin, n + 1):
            if dp[i - coin] != float('inf'):
                dp[i] = min(dp[i], dp[i - coin] + 1)
    print(dp[n])
