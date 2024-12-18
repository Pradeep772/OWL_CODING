class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans=prices;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int j=i+1,a;
            while(j<n){
                if(prices[j]<=prices[i]){
                    ans[i]=prices[i]-prices[j];
                    break;
                }
                j++;
            }
        }
        return ans;  
    }
};