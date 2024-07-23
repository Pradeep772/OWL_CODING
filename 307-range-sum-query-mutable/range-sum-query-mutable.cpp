class sag{
    public:
        vector<int>tree;
        int N;
        sag(int n){
            N=n;
            tree.resize(4*N+5);
        }
        void bult(vector<int>&b,int l,int r,int ind){
            if(l==r){
                tree[ind]=b[l];
                return;
            }
            int mid=(l+r)/2;
            bult(b,l,mid,(2*ind)+1);
            bult(b,mid+1,r,2*ind+2);
            tree[ind]=tree[2*ind+1]+tree[2*ind+2];
        }
        int query(int ind,int l,int r,int low,int hig){
            if(l>=low && r<=hig){// completely inzone
                return tree[ind];
            }
            if(l>hig || r<low ){//No Zone
                return 0;
            }
            int mid=(l+r)/2;
            int left=query(2*ind+1,l,mid,low,hig);
            int right=query(2*ind+2,mid+1,r,low,hig);
            return left+right;

        }
        void updat(int ind,int l,int r,int uind,int val){
            if(l==r){
                tree[ind]=val;
                return;
            }

            int mid=(l+r)/2;
            if(uind<=mid && uind>=l){
                updat(2*ind+1,l,mid,uind,val);
            }
            if(uind>=mid+1 && uind<=r){
                updat(2*ind+2,mid+1,r,uind,val);
            }
            
            tree[ind]=tree[2*ind+1]+tree[2*ind+2];
        }
};
class NumArray {
public:
    sag* root;
    NumArray(vector<int>& nums) {
        
        root=new sag(nums.size());       
        root->bult(nums,0,nums.size()-1,0);
    }
    
    void update(int index, int val) {
        root->updat(0,0,(root->N)-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return root->query(0,0,(root->N)-1,left,right);

    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */