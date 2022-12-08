class Solution {
public:
    string frequencySort(string s) {
        // map<char,int> mp;
        // for(auto i:s)
        // {
        //     ++mp[i];
        // }
        // vector<pair<int,char>> a;
        // for(auto i:mp)
        // {
        //     a.push_back({i.second,i.first});
        // }
        // sort(a.rbegin(),a.rend());
        // string ans="";
        // for(auto i:a)
        // {
        //     for(int j=0;j<i.first;++j)
        //     ans+=i.second;
        // }
        // // ans=reverse(ans);
        // return ans;
        unordered_map<char, int> freqs;
    for (char ch : s)
        freqs[ch]++;
    
    vector<pair<char, int>> sortedFreqs(freqs.begin(), freqs.end()); 
    sort(sortedFreqs.begin(), sortedFreqs.end(), [](pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    });
    
    string res;
    for (auto& [ch, cnt] : sortedFreqs) {
        for (int i = 0; i < cnt; i++)
            res += ch;
    }
    return res;
    }
};