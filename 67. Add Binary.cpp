class Solution {
public:
    string addBinary(string a, string b) {
        int ap=a.length()-1;
        int bp=b.length()-1;
        int c=0;
        int sum=0;
        vector<int> bin; 
        string ans;
        while(ap>=0&&bp>=0){
            sum=(a[ap]-'0')+(b[bp]-'0')+c;
            if(sum==0){
                c=0;
                ans=ans+'0';
            }
            else if(sum==1){
                c=0;
                ans=ans+'1';
            }
            else if(sum==2){
                c=1;
                ans=ans+'0';
            }
            else if(sum==3){
                c=1;
                ans=ans+'1';
            }
            ap--;
            bp--;
            sum=0;
        }
        if(ap==-1){
            while(bp>=0){
            sum=(b[bp]-'0')+c;
            if(sum==0){
                c=0;
                ans=ans+'0';
            }
            else if(sum==1){
                c=0;
                ans=ans+'1';
            }
            else if(sum==2){
                c=1;
                ans=ans+'0';
            }
            bp--;
            }
        }
        else if(bp==-1){
            while(ap>=0){
            sum=(a[ap]-'0')+c;
            if(sum==0){
                c=0;
                ans=ans+'0';
            }
            else if(sum==1){
                c=0;
                ans=ans+'1';
            }
            else if(sum==2){
                c=1;
                ans=ans+'0';
            }
            ap--;
            }
        }
        if(c==1) ans=ans+'1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};