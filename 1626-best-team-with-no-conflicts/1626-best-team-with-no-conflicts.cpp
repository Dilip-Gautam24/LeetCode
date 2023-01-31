class Solution {
public:
    
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> a;
        int n=ages.size();
        vector<int> dp(n);
        for(int i=0;i<n;++i)
        {
            a.push_back({ages[i],scores[i]});
        }
        sort(a.begin(),a.end());
        int i,j,k,ans=0;
        for(i=0;i<n;++i)
        {
            dp[i]=a[i].second;
            for(j=0;j<i;++j)
            {
                if(a[i].second>=a[j].second)
                {
                    dp[i]=max(dp[i],dp[j]+a[i].second);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};