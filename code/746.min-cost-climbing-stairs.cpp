class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev1 = cost[1];
        int prev2 = cost[0];
        int costRet = 0;
        for(int i = 2; i < cost.size(); i++) {
            costRet = min(prev1, prev2) + cost[i];
            prev2 = prev1;
            prev1 = costRet;
        }
        return min(prev1,prev2);
    }
};