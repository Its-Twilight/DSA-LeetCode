class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        for(int i=0;i<numRows;i++){
            nums[i].resize(i+1);
            for(int j=0;j<i+1;j++){
                if(j==0){
                    nums[i][0]=1;
                    continue;
                }
                if(j==i){
                    nums[i][j]=1;
                    continue;
                }
                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
            }
        }
        return nums;
    }
};