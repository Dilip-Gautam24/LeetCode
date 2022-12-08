class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int i,j,k=0,n=nums.size(),ans=INT_MAX,z=-1;
        vector<long long int> a(n);
        a[0]=nums[0];
        k=a[0];
        for(i=1;i<n;++i)
        {
            k+=nums[i];
            a[i]=a[i-1]+nums[i];
        }
        for(i=0;i<n;++i)
        {
            j=(n-i-1)==0?0:((k-a[i])/(n-i-1));
            // ans=min(ans,
            // ans+=abs((a[i]/(i+1))-j);
            if(ans>abs((a[i]/(i+1))-j))
            {
                z=i;
                ans=abs((a[i]/(i+1))-j);
            }
        }
        return z;
    }
};