class Solution:
    def climbStairs(self, n: int) -> int:
        a=1
        b=1
        c=0
        if (n==1 or n==2 or n==3):
                return n
        for i in range(0,n):
                c=b
                b=a+b
                a=c
        return c

              