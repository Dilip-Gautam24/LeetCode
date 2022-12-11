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
    // int l(TreeNode *root)
    // {
    //     if(!root) return 0;
    //     return root->val+l(root->left);
    // }
    // int r(TreeNode *root)
    // {
    //     if(!root) return 0;
    //     return root->val+r(root->right);
    // }
    int call(TreeNode *root,int &m)
    {
        if(!root) return 0;
        int x=root->val;

        int y=max(0,call(root->left,m));
        int z=max(0,call(root->right,m));
        m=max(m,x+y+z);

        return x+max(y,z);
    }
    int maxPathSum(TreeNode* root) {
        int m=INT_MIN;
        call(root,m);
        return m;
    }
};