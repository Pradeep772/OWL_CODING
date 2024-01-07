class Solution:
    def areaOfMaxDiagonal(self, d: List[List[int]]) -> int:
        if(len(d)==1):
            return d[0][0]*d[0][1]
            
        m=0
        b=0
        for i in range(len(d)):
            a=(d[i][0]*d[i][0]+d[i][1]*d[i][1])**0.5
            
            if(m<a):
                m=a
                b=d[i][0]*d[i][1]
            elif(m==a):
                if(b<d[i][0]*d[i][1]):
                    b=d[i][0]*d[i][1];
                
        return b