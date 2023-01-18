class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0,c1=0,c2=0,mi=INT_MAX,mx=INT_MIN;
        for(auto i:nums)
        {
            sum+=i;
            c1+=i;
            c2+=i;
            mx=max(mx,c1);
            mi=min(mi,c2);
            if(c1<0) c1=0;
            if(c2>0) c2=0;
        }
        return (sum==mi)?mx:max(mx,sum-mi);
    }
};