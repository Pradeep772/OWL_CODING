class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int i=0;
        int ans=0;
        stack<char>st;
        while(i<s.size()){
            if(x>y){
                if(!st.empty() && s[i]=='b' && st.top()=='a'){
                    ans+=x;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                if(!st.empty() && s[i]=='a' && st.top()=='b'){
                    ans+=y;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            i++;
        }
        vector<char>a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        i=0;
        while(i<a.size()){
            if(x>y){
                if(!st.empty() && a[i]=='a' && st.top()=='b'){
                    ans+=y;
                    st.pop();
                }
                else{
                    st.push(a[i]);
                }
            }
            else{
                if(!st.empty() && a[i]=='b' && st.top()=='a'){
                    ans+=x;
                    st.pop();
                }
                else{
                    st.push(a[i]);
                }
            }
            i++;
        }
        return ans;

    }
};