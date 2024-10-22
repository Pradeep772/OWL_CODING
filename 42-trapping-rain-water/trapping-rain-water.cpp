class Solution {
public:
    int trap(vector<int>& h) {
     vector<int>left,right;
     left.push_back(0);
     int lm=h[0];
     for(int i=1;i<h.size();i++){
        left.push_back(lm);
        if(lm<h[i]){
            lm=h[i];
        }
     }
     right.push_back(0);
     int rm=h[h.size()-1];
     for(int i=h.size()-2;i>=0;i--){
        right.push_back(rm);
        if(rm<h[i]){
            rm=h[i];
        }
     }
     reverse(right.begin(),right.end());
     int ans=0;
     for(int i=0;i<h.size();i++){
        int x=min(left[i],right[i])-h[i];
        if(x>0){
            ans+=x;
        }
     }
     return ans;
    }
};