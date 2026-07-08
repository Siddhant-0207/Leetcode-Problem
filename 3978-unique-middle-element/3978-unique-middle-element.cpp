class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        map<int,int> check;
        for(int i =0;i<n;i++)
        {
            check[nums[i]]++;
        }
        int apperance = check[nums[n/2]];
        if(apperance>=2)
        {
            return false ;
        }
        else
        return true ;
    }
};