class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>v(3);
        for(auto it:bills){
            if(it==5){
                 v[0]++;
            }
            if(it==10){
                if(v[0]<1){
                    return 0;
                }
                else{
                    v[0]--;
                    v[1]++;
                }
                
            }
            if(it==20){
                if(v[1]<1 && v[0]<3){
                    return 0;
                }
                else if(v[1]>1 && v[0]<1){
                    return 0;
                }
                else if(v[1]<1 && v[0]>=3){
                    v[0]-=3;
                    v[2]++;
                }
                else{
                    v[1]--;
                    v[0]--;
                    v[2]++;
                }
            }
        }
        return 1;
    }
};