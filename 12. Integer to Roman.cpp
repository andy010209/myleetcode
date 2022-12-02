class Solution {
public:
    string intToRoman(int num) {
        int temp;
        string o,f,t;
        string ans;
        for(int i=0;i<4;i++){
            switch (i){
                case 0:
                    t='z';f='z';o='M';break;
                case 1:
                    t='M';f='D';o='C';break;
                case 2:
                    t='C';f='L';o='X';break;
                case 3:
                    t='X';f='V';o='I';break;
            }
            temp=num;
            for(int s=3;s>i;s--){
                temp=temp/10;
            }
            temp=temp%10;
            if(temp<4){
                int p=temp;
                while(p>0){
                    ans=ans+o;
                    p--;
                }
            }
            else if(temp==4){
                ans=ans+o+f;
            }
            else if(4<temp&&temp<9){
                ans=ans+f;
                int k=temp-5;
                while(k>0){
                    ans=ans+o;
                    k--;
            }
            }
            else if(temp==9){
                ans=ans+o+t;
            }
        }
        return ans;
    }
};