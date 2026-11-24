class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int maxi,mc,mr;
        vector<int> index;
        int left=0,right=col-1,mid;
        while(index.empty()==true){
            mid=left+((right-left)/2);
            maxi=INT_MIN;
            for(int i=0;i<row;i++){
                maxi=max(maxi,mat[i][mid]);
                if(maxi==mat[i][mid]){
                    mr=i;           //mr=max_row
                    mc=mid;         //mc=max_column
                }
            }
            int leftVal=(mc>0) ? mat[mr][mc-1] : -1;
            int rightVal=(mc+1<col) ? mat[mr][mc+1] : -1;

            if(maxi>leftVal && maxi>rightVal) {
                index.push_back(mr);
                index.push_back(mc);
                break;
            }
            else if(maxi<leftVal) {
                right=mid-1;
            } 
            else{
                left=mid+1;
            }
        }
        return index;
    }
};