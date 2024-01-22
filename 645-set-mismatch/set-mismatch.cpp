class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,c=1;
        set<int>s(nums.begin(),nums.end());
        for(auto it:s){
            if(count(nums.begin(),nums.end(),it)==2){
                a=it;
                break;
            }  
        }
        for(auto it:s){
            if(c!=it){
                b=c;
                break;
            }
            c++;
        }
        return {a,b};
    }
};