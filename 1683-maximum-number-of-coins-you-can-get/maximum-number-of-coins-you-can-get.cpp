class Solution {
public:
    int maxCoins(vector<int>& p) {
        int a=0;
        int c=(p.size()/3)*2;
        sort(p.rbegin(),p.rend());
        for(int i=1;i<c+1;i+=2){
            a+=p[i];
        }
        return a;
        
    }
};