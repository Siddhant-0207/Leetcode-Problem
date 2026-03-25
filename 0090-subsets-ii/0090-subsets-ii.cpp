class Solution {
public:
    void helper(vector<int>& nums, int ind, vector<int>& ds,
                vector<vector<int>>& ans) {
        ans.push_back(ds);

        for (int i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[i - 1])
                continue;
            ds.push_back(nums[i]);
            helper(nums, i + 1, ds, ans);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        helper(nums, 0, ds, ans);
        return ans;
    }
};