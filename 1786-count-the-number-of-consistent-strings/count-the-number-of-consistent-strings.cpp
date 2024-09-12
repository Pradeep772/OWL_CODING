class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        map<char,int>mp;
        for(auto it:a){
            mp[it]++;
        }
        int ct=0;
        for(auto it:w){
            bool n=0;
            for(auto i:it){
                if(mp[i]!=1){
                    n=1;
                    break;
                }
            }
            if(!n){
                ct++;
            }
        }
        return ct;
    }
};