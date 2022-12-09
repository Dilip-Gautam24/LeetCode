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
    void call(TreeNode* root,int mn,int mx,int &ans)
    {
        if(root==NULL) return ;
        ans=max(max(abs(mn-root->val),ans),max(abs(mx-root->val),ans));
        mn=min(mn,root->val);
        mx=max(mx,root->val);
        call(root->left,mn,mx,ans);
        call(root->right,mn,mx,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=INT_MIN;
        call(root,root->val,root->val,ans);
        return ans;
    }
};