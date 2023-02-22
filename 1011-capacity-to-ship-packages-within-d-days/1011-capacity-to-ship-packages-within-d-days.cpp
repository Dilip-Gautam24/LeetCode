class Solution {
public:
    bool call(vector<int> &a,int day,int cap)
    {
        int d=1,ccap=0;
        for(auto i:a)
        {
            if(ccap+i>cap)
            {
                ++d;
                ccap=0;
            }
            // else
                ccap+=i;
        }
        return d<=day;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int a=0,b=0,m,ans;
        for(auto i:weights)
        {
            a=max(a,i);
            b+=i;
        }
        ans=b;
        while(a<=b)
        {
            m=(a+b)/2;
            if(call(weights,days,m)){
                ans=m;
                b=m-1;
            }
            else
            {
                a=m+1;
            }
        }
        return ans;
    }
};