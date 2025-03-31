class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int>ans;
      map<char,int>mp;
      for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
      } 
      int i=0,j=0;
      while(i<s.size()){
        int m=mp[s[i]];
        while(j<=m){
            m=max(m,mp[s[j]]);
            j++;
        }
        ans.push_back(m-i+1);
        i=j;
      }
      return ans;
    }
};