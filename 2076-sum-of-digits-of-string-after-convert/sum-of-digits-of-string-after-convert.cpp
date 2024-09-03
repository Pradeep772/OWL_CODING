class Solution {
public:
    int getLucky(string s, int k) {
        string sum="";
        for(auto it:s){
            int n=(it-'a')+1;
            sum+=to_string(n);
        }
        int ans=0;
        while(k--){
            for(auto it:sum){
                string st=to_string(it);
                ans+=stoi(st)-48;
            }
            if(k!=0){
                sum=to_string(ans);
                ans=0;
            }
        }

        
        return ans;
    }
};