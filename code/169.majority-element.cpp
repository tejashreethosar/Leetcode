class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0, freq = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[majority])
                --freq;
            else
                ++freq;
            if(freq == 0)
                majority = i, freq = 1;
        }
            
        return nums[majority];
    }
};