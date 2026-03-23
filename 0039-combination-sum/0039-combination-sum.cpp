class Solution {
    public:
    void solver(int ind,vector<int> &ds,vector<int>& candidates , int target,int n,vector<vector<int>> &ans)
    { if(ind==n){
        if(target==0)
        {
            ans.push_back(ds);
            
        }
        return ;
    }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            solver(ind ,ds, candidates,target-candidates[ind],n,ans);
            ds.pop_back();
        }
        solver(ind+1 ,ds, candidates,target,n,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n =  candidates.size();
        vector<int> ds ;
        solver(0,ds,candidates,target,n ,ans);
        return ans;
    }

};