class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int c=0,i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            // cout<<a[i]<<" "<<b[j]<<"\n";
            if(a[i]=='1' && b[j]=='1')
            {
                // cout<<"11\n";
                if(c==1)
                {
                    ans=ans+'1';
                    
                }
                else
                {
                    ans=ans+'0';
                    c=1;
                }
            }
            else if(a[i]=='1' || b[j]=='1')
            {
                // cout<<"10\n";
                if(c==1)
                {
                    ans=ans+'0';
                }
                else
                {
                    ans=ans+'1';
                    c=0;
                }
            }
            else
            {
                // cout<<"00\n";
                if(c==1) ans=ans+'1';
                else ans=ans+'0';
                c=0;
            }
            ++i;
            ++j;
                
        }
        while(i<a.size())
        {
            if(a[i]=='1' && c==1)
            {
                ans+='0';
            }
            else if(a[i]=='1' || c==1)
            {
                ans+='1';
                c=0;    
            }
            else
            {
                ans+='0';
            }
            ++i;
        }
        while(j<b.size())
        {
            if(b[j]=='1' && c==1)
            {
                ans+='0';
            }
            else if(b[j]=='1' || c==1)
            {
                ans+='1';
                c=0;    
            }
            else
            {
                ans+='0';
            }
            ++j;
        }
        if(c==1) ans+='1';
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};