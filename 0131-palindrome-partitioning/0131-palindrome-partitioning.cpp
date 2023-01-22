class Solution {
public:
    bool check(string &s,int a,int b)
    {
        while(a<=b)
        {
            if(s[a]!=s[b])
                return false;
            ++a;
            --b;
        }
        return true;
    }
    void call(int ind,string &s,vector<string> &z,vector<vector<string>>&ans)
    {
        if(ind==s.size())
        {
            ans.push_back(z);
            return ;
        }
        for(int i=ind;i<s.size();++i)
        {
            if(check(s,ind,i))
            {
                z.push_back(s.substr(ind,i-ind+1));
                call(i+1,s,z,ans);
                z.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> z;
        vector<vector<string>> ans;
        call(0,s,z,ans);
        return ans;
    }
};