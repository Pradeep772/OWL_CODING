class Solution {
public:
    string makeFancyString(string s){
        stack<char>st;
        int ct=1;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]!=st.top()){
                ct=1;
                st.push(s[i]);
            }
            else if(s[i]==st.top() && ct<2){
                ct++;
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};