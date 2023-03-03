class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> a;
        int n=haystack.size(),m=needle.size();
        for(int i=0;i<n;++i)
        {
            if(haystack[i]==needle[0]) a.push_back(i);
        }
        int j,k=0,x;
        for(auto i:a)
        {
            j=i;
            x=0;
            while(j<n && k<m)
            {
                if(haystack[j]!=needle[k])
                {
                     
                    k=0;
                    break;
                }
                ++x;
                ++j;
                ++k;
            }
            if(k==m &&x==m) return i;
        }
        return -1;
    }
};