class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest= INT_MIN;
        int secLargest = INT_MIN;
        int smallest = INT_MAX;
        int secSmallest = INT_MAX;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>largest){
                secLargest = largest;
                largest = nums[i];
            }
            else if(   nums[i]>secLargest)
            {
                secLargest = nums[i];
            }


            if (nums[i]<smallest)
            {
                secSmallest = smallest;
                smallest = nums[i];
            }
            else if( nums[i]<secSmallest)
            {
                secSmallest=nums[i];
            }
        }

        long long  product1 = (long long )largest * secLargest;
        long long  product2 = (long long)smallest * secSmallest;

        return (int)product1 - product2;
    }
};