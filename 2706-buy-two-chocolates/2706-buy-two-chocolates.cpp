class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int orignalMoney = money;
        int cnt = 2;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] <= money) {
                money -= prices[i];
                cnt--;
            }
            if (cnt == 0) {
                return money;
            }
        }

        return orignalMoney;
    }
};