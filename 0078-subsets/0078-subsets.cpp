class Solution {
public:
    void helper (int ind, vector<int> &ds, vector<int> &nums , int n,vector<vector<int>>& ans)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            
            return ;
        }


        //pick
        ds.push_back(nums[ind]);
        helper(ind+1,ds,nums,n,ans);
        ds.pop_back();

        //not pick
        helper(ind+1,ds , nums,n,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int> ds;
       int n = nums.size();
       helper(0,ds,nums,n,ans);
       return ans;
    }
};
    