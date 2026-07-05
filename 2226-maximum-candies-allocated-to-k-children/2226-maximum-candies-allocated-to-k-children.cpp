class Solution {
public:
    long long  childernCount(vector<int> & candies, long long k , long long mid )
    {
        long long  cnt=0;
        for(int pile : candies)
        {
            cnt += pile/mid;
        }
        return cnt;
    }

public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long  low = 1 , high = *max_element(candies.begin(),candies.end());
        int result =0;
        while ( low <= high)
        {
            long long mid = low + (high-low)/2;
            long long  total_child = childernCount(candies,k,mid);
            if(total_child >= k ) {
                result = mid;
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return result ;
    }
};