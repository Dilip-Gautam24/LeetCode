class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        if(n==1) return 0;
        else 
        {
            int i,m=0,mi=p[0];
            for(i=0;i<n;++i)
            {
                m=max(m,p[i]-mi);
                mi=min(mi,p[i]);

            }
            return m;
        }
        
    }
};