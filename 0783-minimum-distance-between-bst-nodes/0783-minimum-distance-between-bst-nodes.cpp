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
//     int ans;
//     void call(TreeNode *root,int x)
//     {
//         if(root==NULL)
//             return ;
//         call(root->left,root->val);
//         if(x!=INT_MAX)
//         ans=min(ans,abs(root->val-x));
//         call(root->right,root->val);
        
        
        
//     }
//     int minDiffInBST(TreeNode* root) {
//         ans=INT_MAX;
//         call(root,INT_MAX);
//         // call(root->right,root->val);
//         return ans;
//     }
    vector<int> inorderNodes;
    
    void inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        
        inorderTraversal(root->left);
        // Store the nodes in the list.
        inorderNodes.push_back(root->val);
        inorderTraversal(root->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);
        
        int minDistance = INT_MAX;
        // Find the diff between every two consecutive values in the list.
        for (int i = 1; i < inorderNodes.size(); i++) {
            minDistance = min(minDistance, inorderNodes[i] - inorderNodes[i - 1]);
        }
        
        return minDistance;
    }
};