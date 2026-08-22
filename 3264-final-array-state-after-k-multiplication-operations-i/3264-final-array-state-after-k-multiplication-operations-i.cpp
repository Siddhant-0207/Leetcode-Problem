class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k > 0) {
            int index =0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < nums[index]) {
                    index = i ;
                }
            }
            nums[index] = nums[index] * multiplier;
            k--;
        }
        return nums;
    }
};