class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string a(s.rbegin(),s.rend());
        for(int i=0;i<s.size();i++){
            if(s[i]!=a[i]){
                if(s[i]>a[i]){
                    s[i]=a[i];
                }
            }
        }
        return s;
    }
};