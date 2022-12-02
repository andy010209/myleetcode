class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int p=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[i-1]){
                p+=prices[i-1]-buy;
                buy=prices[i];
            }
        }
        if(prices[prices.size()-1]>=prices[prices.size()-2])
                p+=prices[prices.size()-1]-buy;
        return p;
    }
};