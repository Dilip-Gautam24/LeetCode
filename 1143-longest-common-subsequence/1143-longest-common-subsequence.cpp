class Solution {
public:
    int z[1001][1001];
    int lcs(string &a,int n,string &b,int m)
    {
        if(n==a.size() || m==b.size()) return 0;
        
        if(z[n][m]!=-1) return z[n][m];
        
        if(a[n]==b[m]) return 1+lcs(a,n+1,b,m+1);
        
        return z[n][m] = max(lcs(a,n,b,m+1),lcs(a,n+1,b,m));
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(z,-1,sizeof z);
        return lcs(text1,0,text2,0);
    }
};