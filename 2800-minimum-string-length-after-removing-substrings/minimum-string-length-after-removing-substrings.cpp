class Solution {
public:
    int fun(string s){
        stack<char>st;
        int i=0;
        while(i<s.size()){
            if((s[i]=='A' && s[i+1]=='B') || (s[i]=='C' && s[i+1]=='D')){
                i=i+2;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }
        string a="";
        while(!st.empty()){
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        // cout<<a<<endl;
        if(a.size()==s.size()){
            return s.size();
        }
        else{
            return fun(a);
        }
    }
    int minLength(string s) {
        return fun(s);
    }
};