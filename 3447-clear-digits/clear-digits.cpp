class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(auto it:s){
            if(it-'a'>=0 && it-'a'<=25){
                st.push(it);
            }
            else{
                st.pop();
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