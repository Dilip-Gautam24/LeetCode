bool comp(vector<int> &a,vector<int> &b)
{
    return a[1]<b[1];
}
class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        sort(points.begin(),points.end(),comp);
        
        int i,ans=1,k=points[0][1],n=points.size();
        
        for(i=1;i<n;++i)
        {
            if(points[i][0]>k)
            {
                ++ans;
                k=points[i][1];
            }
        }
        return ans;
    }
};