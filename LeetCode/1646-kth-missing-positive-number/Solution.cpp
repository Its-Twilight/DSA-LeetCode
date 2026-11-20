class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=1,high=arr[n-1],mid;
        int left=0,right=n-1,midi,rem,ans;
        int out=n+k;
        if(out>arr[right]) return out;
        while(left<=right){
            midi=left+((right-left)/2);
            int num=arr[midi];
            int rem=num-(midi+1);
            if(rem<k) left=midi+1;
            if(rem>k) right=midi-1;
            if(rem==k) right=right-1;
        }
        rem=arr[left]-(left+1);
        ans=arr[left]-(rem-k+1);
        return ans;
    }
};