class Solution {
    void helper(int k , int n , vector<vector<int>> &ans , vector<int> &ds , int sum,int start)
    {
        if(ds.size()==k && sum==n)
        {
            ans.push_back(ds);
            return;
        }
        if(ds.size()>=k || sum>=n)
        {
            return ;
        }
        for(int i=start;i<=9;i++)
        {
            ds.push_back(i);
            helper(k,n,ans,ds,sum+i,i+1);
            ds.pop_back();

        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <vector<int>> ans;
        vector<int> ds;
        helper(k,n,ans,ds,0,1);
        return ans;
    }
};