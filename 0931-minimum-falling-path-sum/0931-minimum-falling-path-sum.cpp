class Solution {
public:
    int call(vector<vector<int>> &a,vector<vector<int>>&mp,int i,int j)
    {
        if(i<0||i>=a.size()||j<0||j>=a.size()) return 100000;
        if(mp[i][j]!=INT_MAX) return mp[i][j];        
        int l=call(a,mp,i+1,j-1);
        int m=call(a,mp,i+1,j);
        int r=call(a,mp,i+1,j+1);
        
        int z=100000;

        z=min(min(z,l),min(m,r));
        if(z==100000) z=0;
        
        cout<<l<<" "<<m<<" "<<r<<" i="<<i<<"=="<<a[i][j]+z<<" a="<<a[i][j]<<"\n";
        return mp[i][j]=a[i][j]+z;
            // min(min(l,m),r);
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> mp(n, vector<int>(n, INT_MAX));
        // cout<<mp[0][0]<<" "<<INT_MAX ;
        int ans=INT_MAX;
        for(int i=0;i<n;++i)
        {
            ans=min(ans,call(matrix,mp,0,i));
            cout<<"\n";
        }
        // ans=min(ans,call(matrix,mp,0,2));
        return ans;
    }
};