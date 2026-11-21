class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n1=matrix.size();
        int n2=matrix[0].size();
        int left=0,right=n1-1,mid;
        int low=0,high=n2-1,midi;
        while(left<=right&&low<=high){
            mid=left+((right-left)/2);
            midi=low+((high-low)/2);
            if(matrix[mid][low]<=target && matrix[mid][high]>=target){
                if(matrix[mid][midi]==target) return true;
                if(matrix[mid][midi]<target){
                    low=midi+1;
                    continue;
                }
                if(matrix[mid][midi]>target){
                    high=midi-1;
                    continue;
                }
            }
            if(matrix[mid][low]>target){
                right=mid-1;
                continue;
            }
            if(matrix[mid][high]<target){
                left=mid+1;
                continue;
            }
        }
        return false;
    }
};