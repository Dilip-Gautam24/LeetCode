class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        priority_queue<int> q;
        for(auto i:piles)
        {
            q.push(i);
        }
        for(int i=0;i<k;++i)
        {
            int x;
            x=q.top();
            q.pop();
            
            x-=floor(x/2);
            q.push(x);
        }

        int ans=0;
        while(!q.empty())
        {
            
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};