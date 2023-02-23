class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> a;
        
        int ans=0;
        ans+=w;
        for(int i=0;i<profits.size();++i)
        {
            
            a.push_back({profits[i],capital[i]});
        }
        sort(a.begin(),a.end(),cmp);
        
        priority_queue<int> q;
        
        int j=0;
        while(k--)
        {
            
            while(j<a.size() && a[j].second<=ans)
            {
                q.push(a[j].first);
                ++j;
            }
            if(q.size()>0){
            ans+=q.top();
            q.pop();
            }
            
        }
        return ans;
    }
};