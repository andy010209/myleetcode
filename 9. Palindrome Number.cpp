class Solution {
public:
    bool isPalindrome(int x) {
        int c=1;
        int a=0;
        int b=0;
        int aa=1;
        int bb=1;
        int t=0;
        int front=0;
        int back=0;
        if(x<0) return 0;
        else{
            t=x;
            while(t>9){
                t=t/10;
                c++;
            }
            a=c/2;
            b=c/2;
            if(c%2==0){
                for(int i=0;i<b;i++){
                    bb=bb*10;
                }
                back=x%bb;
                x=x/bb;
                for(int j=0;j<a;j++){
                    front=front*10;
                    front=front+(x%10);
                    x=x/10;
                }
                if(front==back) return 1;
                else return 0;
            }
            else if(c%2==1){
                for(int i=0;i<b;i++){
                    bb=bb*10;
                }
                back=x%bb;
                x=x/bb;
                x=x/10;
                for(int j=0;j<a;j++){
                    front=front*10;
                    front=front+(x%10);
                    x=x/10;
                }
                if(front==back) return 1;
                else return 0;
            }
        }
        return 0;
    }
    
};