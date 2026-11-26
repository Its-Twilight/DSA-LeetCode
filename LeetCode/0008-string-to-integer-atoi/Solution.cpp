class Solution {
public:
    int myAtoi(string s) {
        int n = static_cast<int>(s.size());
        int i = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i == n) {
            return 0;
        }

        int sign = 1;
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        int num = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
};