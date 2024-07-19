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
            else{
                profit = prices[i]-cost;
                max_profit = max(profit,max_profit);
                profit=0;
            }
        }
        return max_profit==INT_MIN?0:max_profit;
    }
};