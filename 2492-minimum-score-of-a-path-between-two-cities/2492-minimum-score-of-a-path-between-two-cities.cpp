class Solution {
public:
    
    void bfs(int n,int i,vector<vector<int>> &adj,vector<int> &vis)
    {
        queue<int> q;
        
        vis[i]=1;
        q.push(i);
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            for(int j=0;j<adj[top].size();++j)
            {
                int k=adj[top][j];
                if(vis[k]==-1)
                {
                    vis[k]=1;
                    q.push(k);
                }
            }
            
            
        }
        // return x;
    }
    
    int minScore(int n, vector<vector<int>>& roads) {

        vector<vector<int>> adj(n+1);
        vector<int> vis(n+1,-1);  
       
        for(auto i:roads)
        {
            
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        // for(auto i:adj)
        // {
        //     for(auto j:i)
        //     {
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        // return 0;
        bfs(n,1,adj,vis);
        
        int ans=INT_MAX;
        for(auto i:roads)
        {
            if(vis[i[0]]==1 && vis[i[1]])
            {
                ans=min(ans,i[2]);
            }
        }
        return ans;
        
    }
};