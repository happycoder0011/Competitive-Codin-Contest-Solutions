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
    int res =0 ;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return res;
    }
    
    int dfs(TreeNode* root)
    {
        if(root==NULL) return 0;
        int leftpath = dfs(root->left);
        int rightpath = dfs(root->right);
        int leftcheck=0,rightcheck=0;
        if(root->left!= NULL && root->val == root->left->val)
            leftcheck = leftpath + 1;
        
        if(root->right != NULL && root->val == root->right->val)
            rightcheck = rightpath +1;
        
        res = max(res,leftcheck+rightcheck);
        
        return max(leftcheck,rightcheck);
    }
};
