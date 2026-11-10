class Solution {
public:
   int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        unordered_set<int> mpp(nums.begin(), nums.end()); // Bulk insert is faster
        int longest = 0;
        
        // Loop directly through the unique elements in the hash set
        for (int num : mpp) {
            // Check if it's the start of a sequence
            if (mpp.find(num - 1) == mpp.end()) {
                int currentNum = num;
                int currentStreak = 1;
                
                while (mpp.find(currentNum + 1) != mpp.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longest = max(longest, currentStreak);
            }
        }
        
        return longest;
    }
};