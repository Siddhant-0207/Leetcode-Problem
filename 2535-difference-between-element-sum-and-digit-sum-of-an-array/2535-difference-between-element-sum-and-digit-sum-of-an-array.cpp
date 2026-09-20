class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elSum =0;
        int diSum =0;
        for(int i = 0; i<nums.size();i++)
        {
            elSum += nums[i];
            while(nums[i]>0)
            {
                int lst = nums[i]%10;
                diSum += lst;
                nums[i]=nums[i]/10;
            }
        }
        return abs(elSum - diSum);

    }
};