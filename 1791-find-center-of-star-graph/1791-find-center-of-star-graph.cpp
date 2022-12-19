class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        cout<<n<<"\n";
        map<int,int> mp;
        vector<vector<int>> a(n+2);
        for(auto i:edges)
        {
            ++mp[i[0]];
            ++mp[i[1]];
            // a[i[0]].push_back(i[1]);
            // a[i[1]].push_back(i[0]);
        }
        for(auto i:mp)
        {
            // cout<<a[i].size()<<" "<<"\n";
            // if(a[i][0]==0) continue;
            if(i.second==n) return i.first;
        }
        return -1;
    }
};