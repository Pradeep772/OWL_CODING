class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp,m;
        int c=0;
        for(auto it:s)mp[it]++;
        for(auto it:t)m[it]++;
        set<char>S(s.begin(),s.end());
        for(auto it:S){
            if(mp[it]>m[it]){
                c+=abs(mp[it]-m[it]);
            }
        }
        return c;
        
    }
};