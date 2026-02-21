class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset = 1<<n;
        vector<vector<int>> ans;
        for (int num=0;num<=subset-1;num++)
        {
            vector<int> ls;
            for(int i =0 ; i<n;i++)
            {
                if((num&(1<<i))!=0) ls.push_back(nums[i]);

            }
            ans.push_back(ls);
        }
        return ans;
    }
};