class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
int n = nums.size();
        long long sum_r = 0, sum_l = 0, ans = 0;
        long long left = 0, right = 0, mid;
        for (int i = 0; i < n; i++) {
            if (nums[i] > left) left = nums[i];
            right += nums[i];
        }
        if (k == 1) {
            return right;
        }
        while (left <= right) {
            mid = left + ((right - left) / 2);
            int k_count = 1;
            long long curr_sum = 0;
            for (int i = 0; i < n; i++) {
                if (curr_sum + nums[i] > mid) {
                    k_count++;
                    curr_sum = nums[i];
                } else {
                    curr_sum += nums[i];
                }
            }
            if (k_count <= k) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};