class segmentTree{
    int[] v;
    int N;
    segmentTree(int n){
        this.v = new int[4 * n + 5];
        this.N = n;
    }
    public void buildTree(int ind, int l, int r, int[] arr){
        if(l == r){
            this.v[ind] = arr[l];
            return;
        }
        int mid = (l + r) /2;
        buildTree(2*ind+1, l, mid, arr);
        buildTree(2*ind+2,mid+1,r, arr);
        this.v[ind] = this.v[2*ind+1] + this.v[2*ind+2];
    }
    public int queryTree(int ind, int l, int r, int low, int high){
        if(l >= low && r <= high)return v[ind]; // complete zone
        if(l > high || r < low)return 0; // no zone
        int mid = (l + r) / 2;
        int left = queryTree(2 * ind + 1, l, mid, low, high);
        int right = queryTree(2 * ind + 2, mid+1, r, low, high);
        return left + right;
    }

    public void updateTree(int ind , int l , int r , int index, int value){

        if(l > index || r < index) return;
        if(l == r){
            v[ind] = value;
            return;
        }
        int mid = (l + r)/2;
        updateTree(2 * ind + 1 , l , mid , index , value);
        updateTree(2 * ind + 2 , mid +1 , r , index , value);
        v[ind] = v[2*ind+1] + v[2*ind+2];
    }
}
class NumArray {
    segmentTree Tree;
    public NumArray(int[] nums) {
        Tree = new segmentTree(nums.length);
        Tree.buildTree(0, 0, Tree.N-1, nums);
    }
    
    public void update(int index, int val) {
        Tree.updateTree(0, 0, Tree.N-1, index, val);
    }
    
    public int sumRange(int left, int right) {
        return Tree.queryTree(0, 0, Tree.N-1, left, right);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(index,val);
 * int param_2 = obj.sumRange(left,right);
 */