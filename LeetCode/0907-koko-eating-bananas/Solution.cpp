class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n>h) return -1;
        int k=INT_MAX,left=1;
        int right=*max_element(piles.begin(),piles.end());
        if(n==h) return right;
        while(left<=right){
            int mid=left+((right-left)/2);
            long long sum=0;
            for(int i=0;i<n;i++){
                int val=ceil((double)piles[i]/mid);
                sum=sum+val;
            }
            if(sum<=h){
                k=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return k;
    }
};