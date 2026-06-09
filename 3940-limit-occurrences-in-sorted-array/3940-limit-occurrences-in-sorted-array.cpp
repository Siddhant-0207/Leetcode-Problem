class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            if (it.second > k) {
                for (int i = 0; i < k; i++) {
                    ans.push_back(it.first);
                }
            } else if (it.second == k) {
                for (int i = 0; i < k; i++) {
                    ans.push_back(it.first);
                }
            } else {
                for (int i = 0; i < it.second; i++) {
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};