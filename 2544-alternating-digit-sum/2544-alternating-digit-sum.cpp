class Solution {
public:
    int alternateDigitSum(int n) {
        long long int x=1,a=0,b=0,i,j=0,k;
        k=n;
        while(k)
        {
            k=k/10;
            x=x*10;
        }
        while(n)
        {
            i=n/x;
            
            if(j%2==0)
                a+=i;
            else
                b+=i;
            ++j;
            n=n%x;
            x=x/10;
        }
        // if(n%2==1)
        //     return b-a;
        return b-a;
    }
};