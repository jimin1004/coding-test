import sys
N = int(sys.stdin.readline())
Ai = list(map(int, sys.stdin.readline().split()))
dp = Ai[:]

for i in range(1, N):
    for j in range(i):
        if Ai[j] < Ai[i]:
            dp[i] = max(dp[i], dp[j] + Ai[i])

print(max(dp))