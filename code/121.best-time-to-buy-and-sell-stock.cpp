class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sp = 0;
        int cp = 0;
        int maxV = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[cp] > prices[i]) {
                cp = i;
            }
            if(sp<cp || prices[sp] < prices[i]) {
                sp = i;
            }
            if((sp - cp) > 0) {
                maxV = max(prices[sp] - prices[cp], maxV);
            }
        }
        return maxV;
    }

};