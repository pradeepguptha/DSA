class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestprice = prices[0];
        int max_profit = 0;
        for( int val : prices){

            if ( max_profit < val ){
                max_profit = max(max_profit , val- bestprice);
            } 
            bestprice = min(bestprice , val );
        }
        return max_profit ; 
        
    }
};