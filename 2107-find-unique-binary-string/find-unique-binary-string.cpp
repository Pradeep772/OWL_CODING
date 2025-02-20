class Solution {
public:
    string fun(unordered_set<string>&s,string st,int n){
        if(st.size()==n){
            if(find(s.begin(),s.end(),st)==s.end()){
                return st;
            }
            return "";
        }
        string left=fun(s,st+'0',n);
        if(left.size()!=0)return left;
        string right=fun(s,st+'1',n);
        return right;

    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string>s(nums.begin(),nums.end());
        string  a="";
        int n=nums.size();
        return fun(s,a,n);
    }
};