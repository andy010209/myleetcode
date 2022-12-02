class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int p=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy) buy=prices[i];
            if(prices[i]-buy>p) p=prices[i]-buy;
        }
        return p;
    }
};