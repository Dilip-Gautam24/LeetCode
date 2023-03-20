class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i,j=0,k=0,a=0,ans=0;
        
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==1 && n==0) return true;
            if(flowerbed[0]==1 && n==1) return false;
            if(flowerbed[0]==0 && n==0) return true;
            if(flowerbed[0]==0 && n==1) return true;
            if(n>1) return false;
            
            
        }
        
        for(i=0;i<flowerbed.size();++i)
        {
            if(flowerbed[i]!=0)
            {
                if(a==0)
                {
                    j=k/2;
                }
                else
                j=(k-1)/2;
                ans+=j>0?j:0;
                k=0;
                a=1;
            }
            else 
            {
                ++k;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0)
        {
            if(k==flowerbed.size())
                j=(k+1)/2;
            else
            j=(k)/2;
            ans+=j>0?j:0;
            k=0;
        }
        return n<=ans;
        
    }
};