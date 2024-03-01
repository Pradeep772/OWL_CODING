class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=count(s.begin(),s.end(),'1');
        string st="";
        int x=s.size()-1;
        while(x--){
            if(n>1){
                st+='1';
                n--;
            }
            else{
                st+='0';
            }
        }
        st+='1';
        return st;
    }
};