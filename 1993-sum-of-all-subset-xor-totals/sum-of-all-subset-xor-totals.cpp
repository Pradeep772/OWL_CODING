class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>v(1<<n);
        for(int i=0;i<(1<<n);i++){
            for(int j=0;j<n;j++){
                if(i&(1<<j))v[i].push_back(nums[j]);
            }
        }
        int c=0;
        for(auto it:v){
            int a=0;
            for(auto i:it){
                a^=i;
            }
            c+=a;
        }
        return c;
    }   
};