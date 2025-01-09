class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto it:words){
            if(it[0]==pref[0] && it.size()>=pref.size()){
                int f=1;
                for(int i=1;i<pref.size();i++){
                    if(pref[i]!=it[i]){
                        break;
                    }
                    else{
                        f++;
                    }
                }
                if(f==pref.size()){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};