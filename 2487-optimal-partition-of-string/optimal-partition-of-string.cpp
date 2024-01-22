class Solution {
public:
    int partitionString(string s) {
        vector<string>m;
        string a="";
        for(int i=0;i<=s.size();i++){
            if(!count(a.begin(),a.end(),s[i])){
                a+=s[i];
            }
            else{
                m.push_back(a);
                a="";
                a+=s[i];
            }
        }
        return m.size()+1;
        
    }
};