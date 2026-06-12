class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int x = max(1, n-k);
        int sum =0;
        while ( abs(n-x)<=k)
        {
            if((n&x)==0) {
                sum +=x;
            }
            x++;
        }
        return sum;
    }
};