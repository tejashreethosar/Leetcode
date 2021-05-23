class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int ,int> mp ;
       mp[0] = -1 ; 
       int count = 0 , maxlan = 0 ;
       
        for(int i=0 ; i<nums.size() ; i++){
            count += (nums[i] == 0)?-1:1 ;
            
            if( mp.find(count) != mp.end() )
                maxlan = max( maxlan , i-mp[count]);
            else 
                mp[count] = i ;
        }
        return maxlan ;
    }
};