class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[0]=1;
        for(auto i:nums)
        {
            sum=((sum+i)%k+k)%k;
            ++mp[sum];
            if(mp[sum]>1)
            {
                ans+=mp[sum]-1;
            }
        }
        return ans;
    }
};