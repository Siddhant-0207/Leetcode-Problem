class Solution {

    public:
    int lowerBound(vector<int> &nums)
    {
        int l = 0 , r = nums.size()-1;
        int index = nums.size();
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(nums[mid]<0)
            {
                l=mid+1;
            }
            else if ( nums[mid]>=0)
            {
                r=mid-1;
                index=mid;
            }
        }
        return index;
    }

    int upperBound(vector<int> &nums)
    {
        int l =0,r=nums.size()-1;
        int index = nums.size();

        while(l<=r)
        {
            int mid = (l+r)/2;

            if (nums[mid]<=0)
            {
                l=mid+1;
            }
            else if (nums[mid]>0)
            {
                r=mid-1;
                index=mid;
            }
        }
        return index;
    }
public:
    int maximumCount(vector<int>& nums) {
        int pos = nums.size()-upperBound(nums);
        int neg = lowerBound(nums);
        return max(pos , neg );
    }
};