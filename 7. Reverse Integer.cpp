class Solution {
public:
    int reverse(int x) {
        long ans=0;
        while(x!=0){
            ans=ans*10;
            ans=ans+x%10;
            x=x/10;
        }
        if(pow(2,31)-1<ans||ans<-(pow(2,31))) return 0;
        else return ans;
    }
};