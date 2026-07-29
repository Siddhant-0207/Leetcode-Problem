class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int largest=nums[0];
        int slargest=-1;
        for(int i =1;i<nums.size();i++)
        {
            if(largest<nums[i])
            {
                slargest = largest;
                largest = nums[i];
            }
            else if (nums[i]<=largest && slargest<nums[i])
            {
                slargest = nums[i];
            }
        }
        return (largest-1)*(slargest-1);
    }
};