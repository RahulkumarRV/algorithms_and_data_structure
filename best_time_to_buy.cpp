class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profite = 0;
        int minprice = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(minprice >  prices[i]){
                minprice = prices[i];
            }
            else if(prices[i] - minprice  > profite){
                profite = prices[i] - minprice;
            }
        }
        return profite;
    }
};
