class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto it:s)mp[it]++;
        vector<pair<int,char>>p;
        for(auto it:mp){
            p.push_back(make_pair(it.second,it.first));
        }
        sort(p.rbegin(),p.rend());
        string x="";
        for(auto it:p){
            int a=it.first;
            while(a!=0){
                x+=it.second;
                a--;
            }
        }
        return x;
    }
};