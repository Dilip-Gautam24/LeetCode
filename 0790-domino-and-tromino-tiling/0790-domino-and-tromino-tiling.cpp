class Solution {
public:
    map<long long int,long long int> mp;
    // int call(int x)
    // {
    //     if(x==2) return 2;
    //     if(mp.find(x)!=mp.end()) return mp[x];
    //     else
    //     {
    //         return mp[x]=x+call(x-1);
    //     }
    // }
    int numTilings(int n) {
        mp[0]=1;
        mp[1]=1;
        mp[2]=2;
        
        int sum=0,i,m=1e9+7;
        for(i=3;i<=n;++i){
            // sum+=mp[i];
            // if(i+1>4) sum+=1;
            // cout<<sum<<" "<<mp[i]<<"\n";
            mp[i]=((2*mp[i-1])+(mp[i-3]))%m;
        }
        // for(i=2;i<n;++i)
        // {
        //     sum+=mp[i];
        //     cout<<mp[i]<<"\n";
        // }
        // mp[n]=sum;
        return mp[n];
    }
};