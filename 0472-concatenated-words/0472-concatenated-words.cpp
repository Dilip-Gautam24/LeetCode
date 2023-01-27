class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_map<string, int>mp;
        vector<string> ans;
        
        for(auto i:words)
            ++mp[i];
        
        for(auto i:words)
        {
            int n=i.size();
            vector<int> dp(n+1,0);
            dp[0]=1;
            for(int x=0;x<n;++x)
            {
                if(!dp[x])
                continue;
                for(int y=x+1;y<=n;++y)
                {
                    if(y-x<n && mp[i.substr(x,y-x)]>0)
                        dp[y]=1;
                }

                if(dp[n])
                {
                    ans.push_back(i);
                    break;
                }
            }
            
        }
        return ans;
            
    }
};