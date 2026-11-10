class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1,mid=left+((right-left)/2);
        while(left<=right){
            if(nums[mid]==target) return mid;
            if(nums[mid]<target){
                left=mid+1;
                mid=left+((right-left)/2);
                continue;
            }
            if(nums[mid]>target){
                right=mid-1;
                mid=left+((right-left)/2);
            }
        }
        mid=-1;
        return mid;
    }
};