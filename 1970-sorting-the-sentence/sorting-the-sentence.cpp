class Solution {
public:
    string sortSentence(string s) {
       vector<string>v;
       string a="";
       for(auto it:s){
           if(it!=' '){
               a+=it;
           }
           else{
               v.push_back(a);
               a="";
           }
       }
       v.push_back(a);
       map<int,string>mp;
       for(auto it:v){
           mp[it[it.size()-1]]=it;
       }
       string b="";
       for(auto it:mp){
           b+=it.second;
           b.pop_back();
           b+=" ";
       }
       b.pop_back();
       return b;
    }
};