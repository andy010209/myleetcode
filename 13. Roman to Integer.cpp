class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        if(s[0]=='I') ans=ans+1;
        else if(s[0]=='V') ans=ans+5;
        else if(s[0]=='X') ans=ans+10;
        else if(s[0]=='L') ans=ans+50;
        else if(s[0]=='C') ans=ans+100;
        else if(s[0]=='D') ans=ans+500;
        else if(s[0]=='M') ans=ans+1000;
        if(s.length()!=1){
            for(int i=1;i<s.length();i++){
                if(s[i]=='I') ans=ans+1;
                else if(s[i]=='V'){
                    if(s[i-1]=='I'){
                        ans=ans+3;
                    }
                    else{
                        ans=ans+5;
                    }
                }
                else if(s[i]=='X'){
                    if(s[i-1]=='I'){
                        ans=ans+8;
                    }
                    else{
                        ans=ans+10;
                    }
                }
                else if(s[i]=='L'){
                    if(s[i-1]=='X'){
                        ans=ans+30;
                    }
                    else{
                        ans=ans+50;
                    }
                }
                else if(s[i]=='C'){
                    if(s[i-1]=='X'){
                        ans=ans+80;
                    }
                    else{
                        ans=ans+100;
                    }
                }
                else if(s[i]=='D'){
                    if(s[i-1]=='C'){
                        ans=ans+300;
                    }
                    else{
                        ans=ans+500;
                    }
                }
                else if(s[i]=='M'){
                    if(s[i-1]=='C'){
                        ans=ans+800;
                    }
                    else{
                        ans=ans+1000;
                    }
                }
            }
        }
        return ans;
    }
};