class Solution {
public:
    bool check(string &s,int a,int b,int c,int d)
    {
        if(a==b||b==c||c==d||(s[a]=='0'&&b-a>1)||(s[b]=='0'&&c-b>1)||(s[c]=='0'&&d-c>1)||(s[d]=='0'&&s.size()-d>1)) return false;
        
        int p,q,r,t;
        p=stoi(s.substr(0,b));
        q=stoi(s.substr(b,c-b));
        r=stoi(s.substr(c,d-c));
        t=stoi(s.substr(d,s.size()-d));
        // cout<<p<<" "<<q<<" "<<r<<" "<<t<<"\n";
        if(p>255||q>255||r>255||t>255) return false;
        return true;
    }
    string ip(string &s,int a,int b,int c,int d)
    {
        string z=s;
        z.insert(d,".");
        z.insert(c,".");
        z.insert(b,".");
        return z;
    }
    
    vector<string> restoreIpAddresses(string s) {
        if(s.size()>12) return {};
        vector<string> ans;
        string z;
        if(s.size()==4)
        {
            // z=s;
            cout<<check(s,0,1,2,3);
            // z.insert(3, ".");
            // z.insert(2, ".");
            // z.insert(1, ".");
            z=ip(s,0,1,2,3);
            return {z};
        }
        else
        {
            // z=;
            // cout<<check(s,0,3,6,8)<<"\n";
            int i,j,k,n=s.size();
            for(i=1;i<n;++i)
            {
                for(j=i+1;j<n;++j)
                {
                    for(k=j+1;k<n;++k)
                    {
                        if(check(s,0,i,j,k))
                        {
                            z=ip(s,0,i,j,k);
                            ans.push_back(z);
                        }
                    }
                }
            }
        }
        return ans;
    }
};