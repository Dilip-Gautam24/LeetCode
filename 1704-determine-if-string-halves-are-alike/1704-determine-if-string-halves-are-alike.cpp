class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();++i)
        {
            c=0;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') c=1;

            if(i<s.size()/2) a+=c;
            else b+=c;
        }
        return a==b;
    }
};