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
    int mod;
    long long int ans,sum;
    void c(TreeNode *root,long long int &s)
    {
        if(!root) return ;
        s+=root->val;
        c(root->left,s);
        c(root->right,s);
        
        
    }
    // void call(TreeNode *root,long long int sum,long long int &ans)
    // {
    //     if(root==NULL) return ;
    //     long long int i=root->val;
    //     i=0;
    //     c(root->left,i);
    //     // cout<<i<<" "<<sum-i<<"\n";
    //     ans=max(ans,((i*abs(sum-i))));
    //     // i=root->val;
    //     i=0;
    //     c(root->right,i);
    //     // cout<<i<<" "<<sum-i<<"\n";
    //     ans=max(ans,((i*abs(sum-i))));
    //     // i+=root->val;
    //     call(root->left,sum,ans);
    //     call(root->right,sum,ans);
    // }
    int pro(TreeNode* root)
    {
        if(root==NULL) return 0;
        
        long long int x=pro(root->left);
        long long int y=pro(root->right);
        
        ans= (ans<(x*(sum-x)))?(x*(sum-x)):ans;
        ans= (ans<(y*(sum-y)))?(y*(sum-y)):ans;
        
        return x+y+root->val;
    }
    int maxProduct(TreeNode* root) {
        ans=0;
        sum=0;
        mod=1e9+7;
        c(root,sum);
        // cout<<sum<<"\n";
        // call(root,sum,ans);
        pro(root);
        return ans%mod;
    }
};