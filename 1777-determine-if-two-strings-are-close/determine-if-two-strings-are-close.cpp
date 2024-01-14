class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return 0;
        vector<int>v1(26,0),v2(26,0);
        int a=0,b=0;
        for(auto it:word1){
            v1[it-'a']++;
            a=a|(1<<(it-'a'));
        }
        for(auto it:word2){
            v2[it-'a']++;
            b=b|(1<<(it-'a'));
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return 0;
                break;
            }
        }
        if(a==b){
            return 1;
        }
        else{
            return 0;
        }
        

    }
};