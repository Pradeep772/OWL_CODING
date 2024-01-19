#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def preToPost(self, pre_exp):
        stack = []
        res = ""

        for i in range(len(pre_exp) - 1, -1, -1):
            c = pre_exp[i]
            if (c.isalpha()):
                stack.append(c)
            else:
                s1 = stack.pop()
                s2 = stack.pop()
                res = s1 + s2 + c
                stack.append(res)
        return stack[-1]

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        prefix = input()
        ob = Solution()
        res = ob.preToPost(prefix)
        print(res)
# } Driver Code Ends