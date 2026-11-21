class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int r=0,c=col-1;
        while(c>=0 && r<=(row-1)){
            if(matrix[r][c]==target) return true;
            if(matrix[r][c]<target){
                r++;
                continue;
            }
            if(matrix[r][c]>target){
                c--;
                continue;
            }
        }
        return false;
    }
};