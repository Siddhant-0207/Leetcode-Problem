class Solution {
public:
    void Findcombination(int ind, vector<int>& candidates, int target,
                         vector<int>& ds, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {
            if (target < candidates[i])
                break;
            if (i > ind && candidates[i] == candidates[i - 1])
                continue;
            
            ds.push_back(candidates[i]);
            Findcombination(i + 1, candidates, target - candidates[i], ds,
                            ans);
            ds.pop_back();

        
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        Findcombination(0, candidates, target, ds, ans);
        return ans;
    }
};