class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mini = INT_MAX;
        int l=-1;
        int r = -1;
        int diff =0;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==1) l=i;
            else if ( nums[i]==2) r=i;
            if(l!=-1 && r!=-1) mini = min(mini,abs(l-r));
        }
        return mini ==INT_MAX?-1:mini ;
    }
};