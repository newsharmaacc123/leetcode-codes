class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=INT_MIN;
        int profit=0;
        int cost = prices[0];
        for(int i=1;i<prices.size();i++){
            if(cost>prices[i]){
                cost = prices[i];
            }
            else if(profit<prices[i]-cost){
                profit = prices[i]-cost;
            }
        }
        return profit;
    }
};