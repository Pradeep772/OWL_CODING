class Solution {
public:
    bool drunk(vector<char> &s,vector<char>& goal,int i){
        if(i==s.size())return 0;
        vector<char>rot(s.begin(),s.end());
        rotate(rot.begin(),rot.begin()+i,rot.end());
        if(goal==rot){
            return 1;
        }
        return drunk(s,goal,i+1);
    }
    bool rotateString(string s, string goal) {
        vector<char>st;
        vector<char>en;
        for(auto it:s){
            st.push_back(it);
        }
        for(auto it:goal){
            en.push_back(it);
        }

        return drunk(st,en,0);
    }
};