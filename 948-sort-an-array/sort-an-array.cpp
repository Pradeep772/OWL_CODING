class Solution {
public:
    void Merge(vector<int>&v,int st,int mid,int ed){
        int i=st,j=mid+1,k=0;
        int temp[ed+1];
        while(i<=mid && j<=ed){
            if(v[i]<v[j]){
                temp[k++]=v[i++];
            }
            else{
                temp[k++]=v[j++];
            }
        }
        while(i<=mid){
            temp[k++]=v[i++];
        }
        while(j<=ed){
            temp[k++]=v[j++];
        }
        for(int i=st;i<=ed;i++){
            v[i]=temp[i-st];
        }
    } 
    void Mergesort(vector<int>&v,int st,int ed){
        if(st>=ed)return;
        int mid=st+((ed-st)/2);
        Mergesort(v,st,mid);
        Mergesort(v,mid+1,ed);
        Merge(v,st,mid,ed);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        Mergesort(nums,0,n-1);
        return nums;
    }
};