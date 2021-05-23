class Solution {
public:
    int rec(int n, map<int,int> &dp){
        if(n==0){
            dp[0] = 1;
            return 1;
        }
        if(dp.find(n)!=dp.end())
            return dp[n];
        int sum = 0;
        for(int k=1;k<=n;k++)
            sum += rec(n-k,dp)*rec(k-1,dp);
        dp[n] = sum;
        return sum;
    }
    int numTrees(int n) {
        map<int,int> dp;
        return rec(n,dp);
    }
};