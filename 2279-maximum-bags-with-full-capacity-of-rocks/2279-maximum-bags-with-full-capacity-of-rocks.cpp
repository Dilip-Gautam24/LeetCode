class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size();
        vector<int> a(n);
        for(int i=0;i<n;++i)
        {
            a[i]=capacity[i]-rocks[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(auto i:a)
        {
            if(i==0) ++ans;
            else
            {
                if(i<=additionalRocks)
                {
                    additionalRocks-=i;
                    ++ans;
                }
            }
        }
        return ans;
    }
};