class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum =0;
        for(int i =0 ;i <arr.size();i++)
        {
            vector<int> test;
            for(int j= i;j<arr.size();j++)
            {
                test.push_back(arr[j]);
                if(test.size()%2!=0){
                    sum += accumulate(test.begin(),test .end(),0);
                }
            }
            test.clear();
        }
        return sum;
    }
};