class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int left=1;
        int right=*max_element(nums.begin(), nums.end());
        int ans=right;
        while(left<=right){
            int mid=left+((right-left)/2);
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if (sum <= threshold) {
                ans=mid;
                right=mid-1;
            } 
            else {
                left=mid+1;
            }
        }
        return ans;
    }
};