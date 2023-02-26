class Solution {
public:
    int call(string &s1,string &s2,int n,int m,vector<vector<int>> &dp)
    {
        if(n==0) return m;
        if(m==0) return n;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s1[n-1]==s2[m-1]) return dp[n][m] = call(s1,s2,n-1,m-1,dp);
        else 
        {
            int i=call(s1,s2,n,m-1,dp);
            int j=call(s1,s2,n-1,m,dp);
            int k=call(s1,s2,n-1,m-1,dp);
            return dp[n][m] = 1+min(i,min(j,k));
        }
        
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size()+1,vector<int> (word2.size()+1,-1));
        return call(word1,word2,word1.size(),word2.size(),dp);
    }
};