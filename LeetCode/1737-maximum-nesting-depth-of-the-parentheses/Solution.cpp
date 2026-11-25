class Solution {
public:
    int maxDepth(string s) {
        int depth=0,max_depth=INT_MIN;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') depth++;
            if(s[i]==')') depth--;
            max_depth=max(max_depth,depth);
        }
        return max_depth;
    }
};