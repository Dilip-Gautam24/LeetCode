class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char> ch(26);
        for(int i=0;i<26;++i)
        {
            ch[i]=i+'a';
        }
        
        for(int i=0;i<s1.size();++i)
        {
            int x=max(ch[s1[i]-'a'],ch[s2[i]-'a']);
            int y=min(ch[s1[i]-'a'],ch[s2[i]-'a']);
            for(int j=0;j<26;++j)
            {
                if(x==ch[j])
                {
                    ch[j]=y;
                }
            }
        }
        string ans;
        for(int i=0;i<baseStr.size();++i)
        {
            ans+=ch[baseStr[i]-'a'];
        }
        return ans;
    }
};