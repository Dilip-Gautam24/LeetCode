class Solution {
public:
    map<int,int> mp;
    int call(int n)
    {
        if(mp.find(n)!=mp.end()) return mp[n];
        if(n==1) return 1;
        if(n==2) return 2;
        
        return mp[n] = call(n-1)+call(n-2);
    }
    int climbStairs(int n) {
        mp[1]=1;
        mp[2]=2;
        return call(n);
    }
};