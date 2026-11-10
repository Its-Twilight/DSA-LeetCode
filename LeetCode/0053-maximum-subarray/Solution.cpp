class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum<0) sum=0;
            if(maxSum<sum) maxSum=sum;
        }
        if(maxSum==0){
            maxSum=INT_MIN;
            for(int j=0;j<n;j++){
               maxSum=max(nums[j],maxSum);
            }
        }
        return maxSum;
    }
};