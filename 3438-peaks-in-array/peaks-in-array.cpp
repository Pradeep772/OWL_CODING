class sig{
    public:
    vector<int>tree;
    int N; 
    sig(int n){
        N=n;
        tree.resize(4*n+5);
    }
    void builtTree(int ind,int l,int r,vector<int>&built){
        if(l==r){
            if(l>0 && r<N-1){
                tree[ind]=(built[l]>built[l+1] && built[l]>built[l-1]);
            }
            else tree[ind]=0;
            return;
        }
        int mid=(l+r)/2;
        builtTree(2*ind+1,l,mid,built);
        builtTree(2*ind+2,mid+1,r,built);
        tree[ind]=tree[2*ind+1]+tree[2*ind+2];
    }
    int quare(int ind,int l,int r,int low,int high){
        if(r < low || l > high){
            return 0;
        }
        if(l>=low && r<=high){
            return tree[ind];
        }
        
        int mid=(l+r)/2;
        int left=quare(2*ind+1,l,mid,low,high);
        int right=quare(2*ind+2,mid+1,r,low,high);
        return left+right;
    }
    void update(int ind,int l,int r,int uind,vector<int>&built){
       
        if(l==r){
            if(l>0 && r<N-1){
                tree[ind]=(built[l]>built[l+1] && built[l]>built[l-1]);
            }
            return;
        }
        int mid=(l+r)/2;
        if(l<=uind && uind<=mid){
            update(2*ind+1,l,mid,uind,built);
        }
        else{
            update(2*ind+2,mid+1,r,uind,built);
        }
        
        
        tree[ind]=tree[2*ind+1]+tree[2*ind+2];
    }
};
class Solution {
public:
    sig* root;
    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        root=new sig(nums.size());
        root->builtTree(0,0,root->N-1,nums);
        for(auto it:queries){
            if(it[0]==1){
                ans.push_back(root->quare(0,0,root->N-1,it[1]+1,it[2]-1));
            }
            if(it[0]==2){
                nums[it[1]]=it[2];
                root->update(0,0,root->N-1,it[1],nums);
                if(it[1]!=0){
                    root->update(0,0,root->N-1,it[1]-1,nums);
                }
                if(it[1]!=root->N-1){
                    root->update(0,0,root->N-1,it[1]+1,nums);
                }
                
                
            }
        }
        return ans;
    }
};