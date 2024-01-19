#User function Template for python3

class Solution:
    def pattern(self, n):
        r = []
        s = ''
        j = 1
        k = n
        u = 2
        i = 1
        while i <= n:
            s = ''
            digits = n-i+1
            if i >= 2:
                # print('-'*u, end='')
                s += ('-'*u)
                u += 2
                while j < k and digits > 0:
                    # print(f'{j}*',end = '')
                    s += str(j)+'*'
                    digits -= 1
                    j += 1
            else:
                while j <= k and digits > 0:
                    # print(f'{j}*',end = '')
                    s += str(j)+'*'
                    digits -= 1
                    j += 1
            k *= 2            
            # print(s.rstrip('*'))
            r.append(s.rstrip('*'))
            i += 1
        
        k = j
        # print(k)
        i = n-1
        j = 1
        while i>=0:
            s =''
            j = n-i
            while j > 0:
                s += '*'+str(k)
                k += 1
                j -= 1
            # print(s)
            r[i] += s
            i -= 1
            
        return r


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.pattern(n)
        for i in range(n):
            print(ans[i])
# } Driver Code Ends