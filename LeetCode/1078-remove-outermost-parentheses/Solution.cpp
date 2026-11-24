class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int n=s.size();
        string ans;;
        for(int i=0;i<n;i++){
            if(s[i]=='(')  count++;
            if(s[i]==')') count--;
            if(count>0 && (count!=1 || s[i]!='(')) ans.push_back(s[i]);
        }
        return ans;
    }
};