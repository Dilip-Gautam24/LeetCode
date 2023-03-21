class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<int> a;
        int j=0,k=1;
        for(int i:nums)
        {
            if(i==0)
            {
                k=0;
            }
            else
            {
                if(j>0) a.push_back(j);
                j=0;
                k=1;
            }
            if(k==0)
            {
                ++j;
            }
            else
            {
                if(j>0) a.push_back(j);
                j=0;
                k=1;
            }
        }
        if(k==0)
        {
            if(j>0) a.push_back(j);
            j=0;
            k=1;
        }
        long long int ans=0,x;
        for(int i:a)
        {
            // cout<<i<<" ";
            x=i;
            x=x*(x+1);
            x=x/2;
            ans+=x;
        }
        cout<<"\n";
        return ans;
    }
};