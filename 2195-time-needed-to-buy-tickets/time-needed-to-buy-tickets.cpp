class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int c=0;
        for(int i=0;i<t.size();i++){
            c+=(i<=k)?min(t[i],t[k]):min(t[i],t[k]-1);
        }
        return c;

    }
};