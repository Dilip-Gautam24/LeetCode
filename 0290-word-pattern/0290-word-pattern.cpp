class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> a;
        string z;
        for(auto i:s)
        {
            if(i==' ')
            {
                a.push_back(z);
                z="";
            }
            else
            {
                z+=i;
            }
        }
        if(z!="") a.push_back(z);

        if(p.size()!=a.size()) return false;
        map<char,string> mp;
        map<string,char> mpp;
        for(int i=0;i<p.size();++i)
        {
            if(mp.find(p[i])==mp.end()){
                
                mp[p[i]]=a[i];
            }
            else if(mp[p[i]]!=a[i])
                return false;
            if(mpp.find(a[i])==mpp.end())
            {
                mpp[a[i]]=p[i];
            }
            else if(mpp[a[i]]!=p[i])
                return false;
        }
        return true;
    }
};