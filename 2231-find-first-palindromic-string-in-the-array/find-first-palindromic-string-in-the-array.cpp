class Solution {
public:
    bool par(string s){
       int f=1;
       for(int i=0;i<(s.size()/2)+1;i++){
           if(s[i]!=s[s.size()-1-i]){
               f=0;
           }
       }
       return f;
        
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(par(it)){
                return it;
                break;
            }
        }
        return "";
    }
};