class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp['(']=')';
        mp['[']=']';
        mp['{']='}';
        stack<char> a;
        a.push(s[0]);
        for(int i=1;i<s.size();++i)
        {
            if(a.empty())
            {
                a.push(s[i]);
            }
            else if(mp[a.top()]==s[i])
            {
                a.pop();
            }
            else 
            {
                a.push(s[i]);
            }
        }
        return a.empty();
    }
};