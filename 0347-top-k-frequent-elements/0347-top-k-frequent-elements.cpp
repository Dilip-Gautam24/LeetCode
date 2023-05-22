class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto i:nums)
        {
            ++m[i];
        }
        vector<pair<int,int>> a;
        for(auto i:m)
        {
            a.push_back({i.second,i.first});
        }
        sort(a.rbegin(),a.rend());
        vector<int> ans;
        for(auto i:a)
        {
            if(k--)
            {
                ans.push_back(i.second);
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};