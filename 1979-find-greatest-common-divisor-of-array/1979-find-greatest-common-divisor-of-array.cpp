class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        while(maxi>0 && mini >0)
        {
            if(maxi>mini)
            {
                maxi=maxi%mini;
            }
            else{
                mini=mini%maxi;
            }
        }
        if(maxi==0)
        {
            return mini;
        }
        return maxi;
    }
};