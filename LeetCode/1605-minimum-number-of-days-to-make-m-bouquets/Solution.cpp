class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mid;
        int n=bloomDay.size();
        if(n<((long long)m*k)) return -1;
        int left= *min_element(bloomDay.begin(),bloomDay.end());
        int right= *max_element(bloomDay.begin(),bloomDay.end());
        while(left<=right){
            mid=left+((right-left)/2);
            int m_bouq=0,k_flow=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid) k_flow++;
                if(bloomDay[i]>mid) k_flow=0;
                if(k_flow==k){
                    m_bouq++;
                    k_flow=0;
                }
                if(m_bouq==m){
                    right=mid-1;
                    break;
                }
                if(i==n-1) left=mid+1;
            }
        }
        return left;
    }
};