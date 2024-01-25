class Solution {
public:
    int Merge(int low , int mid , int high, vector<int>&nums){
        int i = low ;
        int j = mid + 1;
        int ans = 0;
        int x = low;
        int y = mid + 1;
    
        while(y <= high and x <= mid){
            if(nums[x] > 2LL*nums[y]){
                ans+=(mid - x)+1;
                y++;
            }
            else x++;
        }

        int k = low;
        int temp[high+1];
        while(i <= mid and j <= high){
            if(nums[i] < nums[j]){
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }
        while(i <= mid){
            temp[k++]=nums[i++];
        }
        while(j <= high){
            temp[k++]=nums[j++];
        }
        for(int i = low ; i <= high ; i++){
            nums[i] = temp[i];
        }
        return ans;
    }
    int MergeSort(int low , int high , vector<int>&nums){
        if(low >= high){
            return 0;
        }
        int mid = low + (high - low) / 2;
        int c = 0;
        c = MergeSort(low, mid , nums);
        c += MergeSort(mid + 1, high , nums);

        c+= Merge(low, mid, high, nums);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        
        int n = nums.size();
        return MergeSort(0,n-1,nums);
        
    }
};