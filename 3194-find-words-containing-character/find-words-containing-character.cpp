class Solution {
public:
    vector<int>res;
    void drunk(string s,char x,int ind,int q,vector<bool>&vis){
        if(ind==s.size()){
            return;
        }
        if(s[ind]==x and vis[q]!=1){
            vis[q]=1;
            res.push_back(q);
        }
        return drunk(s,x,ind+1,q,vis);
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<bool>vis(words.size());
        for(int i=0;i<words.size();i++){
            drunk(words[i],x,0,i,vis);
        }
        return res;
    }
};