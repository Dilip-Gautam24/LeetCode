class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i,j,k=0,n=strs[0].size(),m=strs.size();
        char x;
        for(i=0;i<n;++i)
        {
            x=strs[0][i];
            for(j=1;j<m;++j)
            {
                if(x>strs[j][i]){ 
                    ++k;
                    break;
                }
                x=strs[j][i];
            }
        }
        return k; 
    }
};