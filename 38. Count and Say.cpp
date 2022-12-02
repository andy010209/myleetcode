class Solution {
public:
    string countAndSay(int n) {
        string ans="";
        string t="1";
        if(n==1) return t;
        int c=1;
        for(int i=1;i<n;i++){
            if(t.length()==1){
                t="11";
                continue;
            }
            for(int k=1;k<t.length();k++){
                if(t[k]==t[k-1]) c++;
                else{
                    ans+=to_string(c)+t[k-1];
                    c=1;
                }
            }
            ans+=to_string(c)+t[t.length()-1];
            c=1;
            t=ans;
            ans="";
        }
        return t;
    }
};