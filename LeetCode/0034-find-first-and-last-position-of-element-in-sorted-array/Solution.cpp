class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> index;
        int left=0,right=n-1,mid=left+((right-left)/2);
        int l=-1,r=-1;
        while(left<=right){
            mid=left+((right-left)/2);
            if(nums[mid]==target){
                right=mid-1;
                l=mid;
                continue;
            }
            if(nums[mid]>target){
                right=mid-1;
                continue;
            }
            if(nums[mid]<target){
                left=mid+1;
                continue;
            }
        }
        index.push_back(l);
        left=0,right=n-1;
        while(left<=right){
            mid=left+((right-left)/2);
            if(nums[mid]==target){
                left=mid+1;
                r=mid;
                continue;
            }
            if(nums[mid]>target){
                right=mid-1;
                continue;
            }
            if(nums[mid]<target){
                left=mid+1;
                continue;
            }
        }
        index.push_back(r);
        return index;
    }
};