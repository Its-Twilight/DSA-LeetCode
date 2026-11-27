class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0) return "";
        if(n==1) return s;
        int left,right;
        int max_len=0,max_l=0,max_r=0;
        string ans;
        for(int i=0;i<n;i++){
            right=0,left=0;
            left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (max_len < len) {
                    max_len = len;
                    max_l = left, max_r = right;
                }
                left--, right++;
            }
            left = i, right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (max_len < len) {
                    max_len = len;
                    max_l = left, max_r = right;
                }
                left--, right++;
            }
        }
        for(int j=max_l;j<=max_r;j++){
            ans.push_back(s[j]);
        }
        return ans;
    }
};