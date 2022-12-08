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
    void call(TreeNode* root,vector<int> &a)
    {
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL) {
            a.push_back(root->val);
            return ;
        }
        call(root->left,a);
        call(root->right,a);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        call(root1,a);
        call(root2,b);
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // for(auto i:a)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        // for(auto i:b)
        // {
        //     cout<<i<<" "; 
        // }
        return a==b;
        // map<int,int> mp;
        // for(auto i:a)
        // {
        //     ++mp[i];
        // }
        // for(auto i:b)
        // {
        //     if(mp.find(i)==mp.end() ) return false;
        //     --mp[i];
        //     if(mp[i]==0)
        //     {
        //         mp.erase(i);
        //     }
        // }
        // return true;
    }
};