class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        map<int,int> frnd ;
        for(int i : friends)
        {
            frnd[i]++;
        }
        for(int i: order)
        {
            if(frnd.find(i)!=frnd.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};