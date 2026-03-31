class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int idx = 0;
        map<int,int> mpp;
        for(auto it:nums)
        {
            if(mpp.find(it)!=mpp.end() && (abs(idx-mpp[it])<=k))
            {
                return true;
            }
            else 
            {
                mpp[it]=idx;
            }
            idx++;
        }
        return false;
    }
};