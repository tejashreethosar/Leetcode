/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* kthSmallest(TreeNode* root, int& count, int k) 
    {  
        if (root == NULL) 
            return NULL; 
  
        TreeNode* left = kthSmallest(root->left, count, k); 
        if (left != NULL) 
            return left; 
  
        count++; 
        if (count == k) 
            return root; 
  
        return kthSmallest(root->right, count, k); 
    } 
    
    int kthSmallest(TreeNode* root, int k) {
        int count = 0; 
        TreeNode* res = kthSmallest(root, count, k); 
        if (res == NULL) 
            return 0; 
        else
            return res->val; 
    }
    
};