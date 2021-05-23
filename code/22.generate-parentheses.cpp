class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, n , n, "", n);
        return result;
    }
    
    void backtrack(vector<string>& result, int open, int close, string curr, int n) {
        if(open == 0 && close==0) {
            result.push_back(curr);
            return;
        }
        if(open!=0)
            backtrack(result, open-1, close, curr+'(', n);
        if(close>open)
            backtrack(result, open, close-1, curr+')', n);
    }
};