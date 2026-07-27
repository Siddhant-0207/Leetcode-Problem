class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r = height.size()-1;
        int maxi =0;
        while (l<r)
        {
            if(height[l]<height[r])
            {
                maxi = max(maxi,(height[l]*abs(l-r)));
                l++;
            }
            else{
                maxi=max(maxi,(height[r]*abs(l-r)));
                r--;
            }
        }
        return maxi;
    }
};