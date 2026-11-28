class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int beauty=0;
        for(int i=0;i<n;++i){
            int freq[26]={0};
            for(int j=i;j<n;++j){
                freq[s[j]-'a']++;
                int max_freq=0,min_freq=INT_MAX;
                for(int c=0;c<26;++c){
                    if(freq[c]>0){
                        max_freq=max(max_freq,freq[c]);
                        min_freq=min(min_freq,freq[c]);
                    }
                }
                beauty=beauty+(max_freq-min_freq);
            }
        }
        return beauty;
    }
};