class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        nth_element(nums.begin(), nums.begin() + n/2, nums.end());
       
        int median = nums[n/2];

        int move =0;
        for(int i:nums){
            move += abs(median-i);
            
        }

        return move;
    }
};