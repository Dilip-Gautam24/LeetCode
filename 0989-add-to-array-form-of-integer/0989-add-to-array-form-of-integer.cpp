class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(),num.end());
        int i=0,j,c=0,x,y,z;
        while(i<num.size() && k>0)
        {
            x=num[i];
            y=k%10;
            z=x+y+c;
            num[i]=z%10;
            c=z/10;
            ++i;
            k=k/10;
        }
        if(k==0)
        {
            while(i<num.size() &&c!=0)
            {
                x=num[i];
                z=c+x;
                num[i]=z%10;
                c=z/10;
                ++i;
            }
        }
        if(k!=0)
        {
            while(k)
            {
                // x=num[i];
                y=k%10;
                z=c+y;
                num.push_back(z%10);
                c=z/10;
                k=k/10;
            }
        }
        if(c!=0)
        {
            num.push_back(c);
        }
        reverse(num.begin(),num.end());
        return num;
    }
};