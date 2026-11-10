class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element=nums[0];
        int track=1;
        for(int i=1;i<n;i++){
            if(element==nums[i]){
                track++;
            }
            if(element!=nums[i]){
                track--;
            }
            if(track==0){
                element=nums[i];
                track++;
            }
        }
        return element;
    }
};