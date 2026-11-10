class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1(n);
        int x=0,y=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                nums1[x]=nums[i];
                x=x+2;
            }
             else{
                nums1[y]=nums[i];
                y=y+2;
            }
        }
        return nums1;
    }
};