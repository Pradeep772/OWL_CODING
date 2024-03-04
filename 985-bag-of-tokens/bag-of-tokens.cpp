class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
       sort(t.begin(),t.end());
        int c=0;
        int i=0,j=t.size()-1;
        while(i<=j){
            if(t[i]>p && c==0){
                return 0;
                break;
            }
            if(t[i]>p && c!=0){
                p+=t[j];
                j--;
                c--;
            }
            if(t[i]<=p){
                c++;
                p-=t[i];
                i++;
            }
            //cout<<p<<" ";
        }
        return c;
    }
};