class Solution {
public:
    
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(auto i:tasks)
        {
            ++mp[i];
        }
        int ans=0,x;
        for(auto i:mp)
        {
            x=i.second;
            if(x==1) return -1;
            if(x%3==0) ans+=x/3;
            else
            ans+=x/3+1;   
        }
        return ans;
    }
};