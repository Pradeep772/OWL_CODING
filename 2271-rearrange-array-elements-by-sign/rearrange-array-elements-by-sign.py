class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        a,b=[],[]
        for i in range(len(nums)):
            if(nums[i]==abs(nums[i])):
                a.append(nums[i])
            else:
                b.append(nums[i])
        nums=[]
        for i in range(len(a)):
            nums.append(a[i])
            nums.append(b[i])
        return nums

