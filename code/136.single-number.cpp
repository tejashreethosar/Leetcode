class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int itr : nums)
            res ^= itr;
        return res;
    }
};