class Solution {
public:
    bool fun(string &st,int s,int e){
        if(s>=e)return 1;
        return (st[s]==st[e])&&fun(st,s+1,e-1);
    }
    bool isPalindrome(int x) {
        string a=to_string(x);
        return fun(a,0,a.size()-1);
    }
};