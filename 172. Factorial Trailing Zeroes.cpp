class Solution {
public:
    int trailingZeroes(int n) {
        int a=0;
        for(int i=5;n/i>0;i*=5){
            a+=n/i;
        }
        return a;
    }
};