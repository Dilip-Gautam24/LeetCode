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
    int ans,x;
    void call(TreeNode *root)
    {
        if(root==NULL)
            return ;
        call(root->left);
        
        if(x!=INT_MAX)
        ans=min(ans,abs(root->val-x));
        
        x=root->val;
        
        call(root->right);
        
        
        
    }
    int getMinimumDifference(TreeNode* root) {
        ans=INT_MAX;
        x=INT_MAX;
        call(root);
        return ans;    
    }
};