class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> a(26,0),b(26,0);
        set<char> c,d;
        for(auto i:word1)
        {
            c.insert(i);
            ++a[i-'a'];
        }
        for(auto i:word2)
        {
            d.insert(i);
            ++b[i-'a'];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b&&c==d;
    }
};