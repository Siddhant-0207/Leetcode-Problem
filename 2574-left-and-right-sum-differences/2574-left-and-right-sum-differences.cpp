class Solution {
public:
    int leftSum(vector<int> &nums, int size){
        int lSum =0;
        for(int i =0;i<size;i++)
        {
            lSum += nums[i];
        }
        return lSum;
    }

    int rightSum(vector<int>& nums , int size)
    {
        int rSum=0;
        for(int i = size+1 ;i<nums.size();i++)
        {
            rSum += nums[i];
        }
        return rSum;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int left = leftSum(nums,i);
            int right = rightSum(nums,i);
            int diff = abs(left-right);
            ans.push_back(diff);
        }
        return ans;
    }
};