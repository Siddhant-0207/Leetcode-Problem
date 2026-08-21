class Solution {
public:
    int  sumOfLastdigts(int x){
        int lastDig = 0;
        int sum =0;
        while(x!=0)
        {
            lastDig = x%10;
            sum +=lastDig;
            x=x/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i =0;i<nums.size();i++)
        {
            int x =  sumOfLastdigts(nums[i]);
            mini = min(x,mini);
        }
        return mini;
    }
};