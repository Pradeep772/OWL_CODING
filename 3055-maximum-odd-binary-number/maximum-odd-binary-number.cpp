class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=count(s.begin(),s.end(),'1');
        string st="";
        for(int i=0;i<n-1;i++){
            st+='1';
        }
        for(int i=0;i<s.size()-1-(n-1);i++){
            st+='0';
        }
        st+='1';
        return st;
    }
};