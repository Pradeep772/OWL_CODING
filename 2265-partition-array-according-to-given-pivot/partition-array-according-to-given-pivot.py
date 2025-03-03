class Solution:
    def pivotArray(self, nums: List[int], p: int) -> List[int]:
        a,b,c=[],[],[]
        for i in nums:
            if(i<p):
                a.append(i)
            elif(i==p):
                b.append(i)
            else:
                c.append(i)
        return a+b+c
