class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        map<pair<char,int>,int>m1;
        map<pair<char,int>,int>m2;
        for(int i=0;i<s1.size();i++){
            m1[make_pair(s1[i],i)]++;
            m2[make_pair(s2[i],i)]++;
        }
        int ans=0;
        for(auto it:m1){
            if(m2[it.first]!=it.second){
                ans++;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(ans<=2 and ans%2==0 && s1==s2)return 1;
        return 0;
        
    }
};