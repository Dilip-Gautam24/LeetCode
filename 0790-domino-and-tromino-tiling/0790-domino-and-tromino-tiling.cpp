class Solution {
public:
    
    int numTilings(int n) {
        // if(n==1) return 1;
        // if(n==2) return 2;
        vector<long long int> mp(n+1);
        mp[0]=1;
        mp[1]=1;
        if(n>1)
        mp[2]=2;
        
        int sum=0,i,m=1e9+7;
        for(i=3;i<=n;++i){
            mp[i]=((2*mp[i-1])+(mp[i-3]))%m;
        }
        // cout<<mp[1];
        return mp[n];
    }
};