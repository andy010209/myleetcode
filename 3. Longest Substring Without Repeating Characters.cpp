class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int t=0;
        int c=1;
        int lc=0;
        int last=-1;
        while(s[i]){
            t=i-1;
                while(t>last){
                    if(s[i]!=s[t]) c++;
                    else{
                        if(lc<c) lc=c;
                        c=1;
                        last=t;
                    }
                    t--;
                }
            if(lc<c) lc=c;
            c=1;
            i++;
        }
        return lc;
    };
};