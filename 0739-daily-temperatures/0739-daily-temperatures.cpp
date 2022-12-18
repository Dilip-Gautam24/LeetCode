class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>> s;
        vector<int> a(temp.size(),0);
        int i;
        for(i=temp.size()-1;i>=0;--i)
        {
            while(s.size()>0 && s.top().first<=temp[i])
            {
                s.pop();
            }
            if(s.size()!=0)
            {
                a[i]=s.top().second-i;
            }
            
            s.push({temp[i],i});
        }
        return a;
    }
};