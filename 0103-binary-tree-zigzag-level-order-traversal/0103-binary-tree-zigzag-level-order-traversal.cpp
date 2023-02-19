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
    void call(TreeNode *root,vector<vector<int>> &a,int i)
    {
        if(root==NULL) return ;
        if(a.size()==i)
        {
            a.push_back({root->val});
        }
        else
            a[i].push_back(root->val);

        call(root->left,a,i+1);
        call(root->right,a,i+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> a;
        call(root,a,0);
        int x=0;
        for(auto i:a)
        {
            if(x%2==1)
                reverse(a[x].begin(),a[x].end());
            ++x;
        }
        return a;
    }
};