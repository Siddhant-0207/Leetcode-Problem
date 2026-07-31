class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> hashmap ;
        vector<int> ans;
        for(int i : nums)
        {
            hashmap[i]++;
        }
        for(auto it : hashmap)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};