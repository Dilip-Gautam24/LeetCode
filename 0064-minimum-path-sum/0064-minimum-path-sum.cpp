class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size(),i,j,k;
        vector<vector<int>> temp(n,vector<int>(m,0));
        temp[0][0]=a[0][0];
        for(i=1;i<m;++i)
        {
            temp[0][i]=temp[0][i-1]+a[0][i];
        }
        for(i=1;i<n;++i)
        {
            temp[i][0]=temp[i-1][0]+a[i][0];
        }
        for(i=1;i<n;++i)
        {
            for(j=1;j<m;++j)
            {
                temp[i][j]=min(temp[i-1][j],temp[i][j-1])+a[i][j];
            }
        }
        // for(i=0;i<n;++i)
        // {
        //     for(j=0;j<m;++j)
        //     {
        //         cout<<temp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
     return temp[n-1][m-1];   
    }
};