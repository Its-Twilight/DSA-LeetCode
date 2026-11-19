class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int left=*max_element(weights.begin(),weights.end());
        int right=0;
        for(int i=0;i<n;i++){
            right=right+weights[i];
        }
        int mid;
        while(left<=right){
            int sum=0,d=1;
            mid=left+((right-left)/2);
            for(int i=0;i<n;i++){
                if((sum+weights[i])<=mid){
                    sum=sum+weights[i];
                }
                else{
                    d++;
                    sum=weights[i];
                }
            }
            if(d<=days){
                right=mid-1;
            } 
            else{
                left=mid+1;
            }
        }
        return left;
    }
};