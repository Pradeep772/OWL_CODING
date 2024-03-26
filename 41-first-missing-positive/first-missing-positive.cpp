class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st;
        int c=0;
        for(auto it:nums){
            if(it>0){
                st.insert(it);
            }
        }
        if(st.size()==0){
            return 1;   
        }
        int ans=INT_MIN;
        int ma=INT_MIN;
        for(auto it:st){
            c++;
            ma=max(ma,it);
            if(it!=c){
                ans=c;
                break;
            }
        }
        
        if(ans<0){
            return ma+1;
        }
        else{
            return ans;
        }
        
    }
};