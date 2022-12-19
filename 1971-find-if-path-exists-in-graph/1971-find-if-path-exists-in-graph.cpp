class Solution {
public:
    bool call(int n,vector<vector<int>>&adj,vector<bool> vis,int i,int d)
    {
        vis[i]=true;
        queue<int> q;
        q.push(i);
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            
            if(temp==d) return true;
            
            for(auto x:adj[temp])
            {
                if(!vis[x])
                {
                    vis[x]=true;
                    q.push(x);
                }
            }
            
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<vector<int>> adj(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        return call(n,adj,vis,source,destination);
    }
};