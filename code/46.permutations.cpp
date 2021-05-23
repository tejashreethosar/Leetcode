class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> visited;
        helper(nums, visited);
        return ret;
    }
    void helper(const vector<int>& nums, vector<int> visited) {
        if(visited.size() == nums.size()) {
            ret.push_back(visited);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(std::find(visited.begin(), visited.end(), nums[i]) == visited.end()) {
                visited.push_back(nums[i]);
                helper(nums,visited);
                visited.pop_back();
            }
        }
    } 
};