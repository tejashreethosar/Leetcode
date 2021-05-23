class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0], nums[1]);
        vector<int> res(nums.size());
        res[0]= nums[0];
        res[1]= nums[1];
        res[2]= nums[0]+nums[2];
        int i;
        for(i=3; i<nums.size(); i++){
            res[i]= max(nums[i]+res[i-2], nums[i]+ res[i-3]);
        }
        return max(res[i-1], res[i-2]);
    }
};