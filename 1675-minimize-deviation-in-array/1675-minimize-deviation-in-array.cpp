class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mn=INT_MAX,n=nums.size(),ans=INT_MAX,x;
        priority_queue<int> q;
        for(int i=0;i<n;++i)
        {
            if(nums[i]%2==1)
            {
                mn=min(mn,nums[i]*2);
                q.push(nums[i]*2);
            }
            else
            {
                mn=min(mn,nums[i]);
                q.push(nums[i]);
            }
        }
        while(!q.empty())
        {
            x=q.top();
            
            ans=min(ans,abs(x-mn));
            mn=min(mn,x/2);
            
            if(x%2==1) return ans;
            q.pop();
            
            q.push(x/2);
        }
       return ans;
    }
};

/*
    2 2 4 6
    
    
    2 4 6 10 20
    
    2 8 10
*/