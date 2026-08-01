class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int , vector<int>> buckets;
        for(int i =0;i<groupSizes.size();i++)
        {
            int size=groupSizes[i];
            buckets[size].push_back(i);

            if(buckets[size].size()==size)
            {
                ans.push_back(buckets[size]);
                buckets[size].clear();
            }
        }
        return ans;
    }
};