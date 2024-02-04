class Solution {
public:
    string minWindow(string s, string t) {
    if(s.size()<t.size())return "";
    if(s==t)return s;
    map<char,int>mp;
    for(auto it:t)mp[it]++;
    string ans="";
    int len=mp.size(),i=0,j=0;
    int n=s.size();
    while(j<n){
        if(mp.find(s[j])!=mp.end()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                len--;
            }            
        }
        if(len==0){
            while(len==0){
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0){
                        len++;
                    }
                }
                i++;
            }
            if(ans.size()==0 || ans.size()>(j-i)+1){
                ans=s.substr(i-1,j-i+2);
            }
        }
        j++;
    }
    return ans;
    }
};