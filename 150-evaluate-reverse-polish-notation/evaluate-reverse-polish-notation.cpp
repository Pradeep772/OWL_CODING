class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto it:tokens){
            if(it=="+"){
                int a=s.top();
                s.pop();
                a+=s.top();
                s.pop();
                s.push(a);
            }
            else if(it=="*"){
                int a=s.top();
                s.pop();
                a*=s.top();
                s.pop();
                s.push(a);
            }
            else if(it=="/"){
                int a=s.top();
                s.pop();
                a=s.top()/a;
                s.pop();
                s.push(a);
            }
            else if(it=="-"){
            int a=s.top();
                s.pop();
                a=s.top()-a;
                s.pop();
                s.push(a);
            }
            else{
                s.push(stoi(it));
            }
        }
        return s.top();
    }
};