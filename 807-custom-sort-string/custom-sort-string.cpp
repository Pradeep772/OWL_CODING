class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int>ch;
        for(auto it:s){
            ch[it]++;
        }

        for(auto it:order){
            if(ch[it]>=1){
                while(ch[it]){
                    ans+=it;
                    ch[it]--;
                }
                
            }
        }
        for(auto it:ch){
            int a=it.second;
            if(a>=1){
                while(a){
                    ans+=it.first;
                    a--;
                }
            }
        }
        
        return ans;  
    }
};