class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(auto it:logs){
            if(it=="../"){
                if(!st.empty()){
                    st.pop();
                }
                
            }
            else if(it=="./"){
                continue;
            }
            else{
                st.push(it);
            }
        }
        return st.size();
    }
};