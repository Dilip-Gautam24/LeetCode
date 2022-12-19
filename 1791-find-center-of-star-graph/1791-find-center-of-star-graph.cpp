class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        cout<<n<<"\n";
        vector<vector<int>> a(n+2);
        for(auto i:edges)
        {
            a[i[0]].push_back(i[1]);
            a[i[1]].push_back(i[0]);
        }
        for(int i=1;i<=n+1;++i)
        {
            cout<<a[i].size()<<" "<<"\n";
            // if(a[i][0]==0) continue;
            if(a[i].size()==n) return i;
        }
        return -1;
    }
};