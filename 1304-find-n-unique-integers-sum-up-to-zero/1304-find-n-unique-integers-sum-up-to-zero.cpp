class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int val = 1;
        for(int i =0;i<n/2;i++)
        {
            ans.push_back(val);
            ans.push_back(-val);

            val++;
        }

        if(n%2==0)
        {
            return ans;
        }
        else{
            ans.push_back(0);
        }
    return ans;
    }
};