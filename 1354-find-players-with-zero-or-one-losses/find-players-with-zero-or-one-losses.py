class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        dic={}
        for w,l in matches:
            dic[w]=1
            dic[l]=1
        loser=[i[1] for i in matches]
        for i in loser:
            dic[i]=0
        x=Counter(loser)
        res=[[k for k,v in dic.items() if v==1],[k for k,v in x.items() if v==1]]
        res[0].sort()
        res[1].sort()
        return res