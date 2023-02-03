class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> a(n);
        int x=0,z=1;
        for(auto i:s)
        {
            a[x].push_back(i);
            x+=z;
            if(x==n-1)
            {
                z=-1;
            }
            if(x==0)
            {
                z=1;
            }
        }
        string ans;
        for(auto i:a)
        {
            for(auto j:i)
            {
                ans+=j;
            }
        }
        return ans;
    }
};