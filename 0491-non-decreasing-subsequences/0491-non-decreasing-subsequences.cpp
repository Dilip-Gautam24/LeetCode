class Solution {
public:
    void call(int i,vector<int>&nums, vector<int>&z, set<vector<int>>&ans)
    {
        if(i>=nums.size()){ 
        
        if(z.size()>1) ans.insert(z);
        return ;
        }
        
        if(z.size()==0||z[z.size()-1]<=nums[i]){ 
            z.push_back(nums[i]);
            call(i+1,nums,z,ans);
            z.pop_back();
        }
        call(i+1,nums,z,ans);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> z;
        call(0,nums,z,ans);
        return vector(ans.begin(),ans.end());
    }
};