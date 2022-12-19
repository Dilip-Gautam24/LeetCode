class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> a(n+1);
        unordered_map<int,int> mp,mpp;
        for(auto i:trust)
        {
            // a[i[0]].push_back(i[1]);
            ++mpp[i[0]];
            ++mp[i[1]];
        }
        for(int i=1;i<=n;++i)
        {
            cout<<a[i].size()<<" "<<"\n";
            // if(a[i][0]==0) continue;
            // if(a[i].size()==0 && mp[i]==n-1) return i;
            if(mpp[i]==0 && mp[i]==n-1) return i;
        }
        return -1;
    }
};