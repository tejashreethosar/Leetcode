class Solution {
    #define RED 0
    #define WHITE 1
    #define BLUE 2
public:
    void sortColors(vector<int>& nums) {
        int reds = 0, whites = 0, blues = nums.size() - 1;
        
        while(whites <= blues) {
            
            if(nums[whites] == RED) {
                
                swap(nums[reds], nums[whites]);
                ++reds;
                ++whites;
                
            } else if(nums[whites] == WHITE) {
                
                ++whites;
                
            } else if(nums[whites] == BLUE) {
                
                swap(nums[whites], nums[blues]);
                --blues;
                
            }
            
        }
    }
};