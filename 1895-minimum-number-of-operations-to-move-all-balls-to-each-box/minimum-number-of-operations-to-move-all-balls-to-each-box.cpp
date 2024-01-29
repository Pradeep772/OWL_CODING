class Solution {
public:
    void drunk(string box,vector<int>&v,int ind){
        if(ind==box.size()){
            return;
        }
        for(int i=0;i<box.size();i++){
            if(box[i]=='1'){
                v[ind]+=abs(ind-i);
            }
        }
        return drunk(box,v,ind+1);

    }
    vector<int> minOperations(string boxes) {
        vector<int>v(boxes.size());
        drunk(boxes,v,0);
        return v;
    }
};