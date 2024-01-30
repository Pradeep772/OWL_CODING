class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto it:tokens){
            if(it=="+"){
                int a=s.top();
                s.pop();
                s.top()+=a;
            }
            else if(it=="*"){
                int a=s.top();
                s.pop();
                s.top()*=a;
            }
            else if(it=="/"){
                int a=s.top();
                s.pop();
                s.top()/=a;
            }
            else if(it=="-"){
            int a=s.top();
                s.pop();
                s.top()-=a;
            }
            else{
                s.push(stoi(it));
            }
        }
        return s.top();
    }
};