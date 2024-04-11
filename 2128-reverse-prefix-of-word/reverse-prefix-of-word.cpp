class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        while(i<word.size()){
            if(word[i]==ch){
                break;
            }
            i++;
        }
        if(i==word.size()){
            return word;
        }
        string ans=word.substr(0,i+1);
        string res=word.substr(i+1);
        reverse(ans.begin(),ans.end());
        return ans+res;
    }
};