class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,n=nums.size(),r=n-1,x=0,m;
        while(l<=r)
        {
            if(l==r) x=l;
            m=(l+r)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return l;
    }
};