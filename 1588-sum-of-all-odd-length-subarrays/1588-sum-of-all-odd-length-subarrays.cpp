class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum =0;
        for(int i =0 ;i <arr.size();i++)
        {
            int currentSum =0;
            for(int j= i;j<arr.size();j++)
            {
                currentSum +=arr[j];
                sum += (j-i+1)%2==1 ? currentSum : 0; 
                
            }
           
        }
        return sum;
    }
};