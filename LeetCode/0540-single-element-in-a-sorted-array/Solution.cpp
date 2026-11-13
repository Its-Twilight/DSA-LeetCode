class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int right=n-1,left=0,mid;
        while(left<=right){
            mid=left+((right-left)/2);
            if(left==right) return nums[mid];
            if(nums[mid]==nums[mid-1]){
                if((mid-left)%2==0) right=mid;
                else left=mid+1;
                continue;
            }
            if(nums[mid]==nums[mid+1]){
                if((mid-left)%2==0) left=mid;
                else right=mid-1;
                continue;
            }  
            return nums[mid];
        }
        return nums[mid];
    }
};