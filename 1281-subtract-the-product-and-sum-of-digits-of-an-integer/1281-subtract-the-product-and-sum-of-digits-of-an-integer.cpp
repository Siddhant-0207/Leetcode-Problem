class Solution {
public:
    int sum(int n){
        int sum =0;
        while(n!=0){
            int lst = n%10;
            sum += lst;
            n=n/10;
        }
        return sum;
    }
    int product(int n)
    {
       int  product = 1;
       while ( n!=0)
       {
        int lst = n%10;
        product *= lst;
        n=n/10;
       }
       return product;

    }
    int subtractProductAndSum(int n) {
        return product(n) - sum(n);
    }
};