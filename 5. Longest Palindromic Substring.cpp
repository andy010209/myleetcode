class Solution {
public:
    string longestPalindrome(string s) {
        int i=0;
        int c=-1;
        int check=1;
        int tc=0;
        int lc=0;
        int la=0,lb=0;
        int ta,tb;
        while(s[i]){
            c++;
            i++;
        }
        for(int a=c;a>0;a--){
            if(a<=lc) break;
            for(int b=0;b<a;b++){
                if(a-b<lc) break;
                for(int x=0;x<(a-b+1)/2;x++){
                    if(s[b+x]!=s[a-x]){
                        check=0;
                        break;
                    }
                }
                if(check){
                    tc=a-b;
                    if(tc>lc){
                        lc=tc;
                        la=a;
                        lb=b;
                    } 
                    break;
                }
                check=1;
                
            }
            
        }
        return s.substr(lb,la-lb+1);
    }
};