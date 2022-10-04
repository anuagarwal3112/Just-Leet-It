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
    void solve(TreeNode* root, vector<int> path, vector<vector<int>> &ans){
        if(root == NULL) return;
        
        path.push_back(root->val);
        
        if(root->left == NULL and root->right == NULL){
            ans.push_back(path);
        }
        
        solve(root->left, path, ans);
        solve(root->right, path, ans);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        
        solve(root, path, ans);
        
        for(auto i:ans){
            int sum = 0;
            for(auto j:i){
                sum  = sum + j; // sum += j;
            }
            if(sum == targetSum) return true;
        }
        return false;
    }
};