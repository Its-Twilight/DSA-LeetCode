class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(i>0){
            if(s[i-1]=='I'&&s[i]=='V'){
                sum+=3; 
                continue;
            }
            else if(s[i-1]=='I'&&s[i]=='X'){
                sum+=8; 
                continue;
            }
            else if(s[i-1]=='X'&&s[i]=='L'){
                sum+=30; 
                continue;
            }    
            else if(s[i-1]=='X'&&s[i]=='C'){
                sum+=80; 
                continue;
            }
            else if(s[i-1]=='C'&&s[i]=='D'){
                sum+=300; 
                continue;
            }
            else if(s[i-1]=='C'&&s[i]=='M'){
                sum+=800; 
                continue;
            }
            }
            if(s[i]=='I') sum+=1;
            else if(s[i]=='V') sum+=5;
            else if(s[i]=='X') sum+=10;
            else if(s[i]=='L') sum+=50;
            else if(s[i]=='C') sum+=100;
            else if(s[i]=='D') sum+=500;
            else if(s[i]=='M') sum+=1000;
        }
        return sum;
    }
};