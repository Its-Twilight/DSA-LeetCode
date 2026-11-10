class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<long long> nums(rowIndex+1);
        for(int i=0;i<rowIndex+1;i++){
            if(i==0||i==rowIndex){
            nums[i]=1;
            continue;
            }
            nums[i]=(nums[i-1]*(rowIndex-i+1))/i;
        }
        return vector<int> (nums.begin(),nums.end());
    }
};