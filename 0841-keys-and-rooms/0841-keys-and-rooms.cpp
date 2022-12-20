class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        
        queue<int> q;
        
        q.push(0);
        vis[0]=true;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(auto i:rooms[temp])
            {
                if(!vis[i])
                {
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        
        for(auto i:vis)
        {
            if(i==false) return false;
        }
        return true;
            
    }
};