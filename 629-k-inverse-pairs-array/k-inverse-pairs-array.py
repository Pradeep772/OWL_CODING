class Solution:
    def kInversePairs(self, n: int, k: int) -> int:
        dp = [[1 for i in range(k+1)] for j in range(n+1)]
        sp = [[1 for i in range(k+1)] for j in range(n+1)]
        mod = 10**9+7
        for i in range(1, n+1):
            for j in range(1, k+1):
                dp[i][j] = sp[i-1][j] if j < i else (sp[i-1][j] - sp[i-1][j-i]) % mod
                sp[i][j] = (sp[i][j-1] + dp[i][j]) % mod
        return dp[-1][-1]