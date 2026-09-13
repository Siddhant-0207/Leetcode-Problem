class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> check = {"999", "888", "777", "666", "555",
                                "444", "333", "222", "111", "000"};
        int index = -1;
        bool flag = false;
        for (int i = 0; i < check.size(); i++) {

            size_t found = num.find(check[i]);
            if (found != string::npos) {
                flag = true;
                index = i;
                break;
            }
        }
        if (flag) {
            return check[index];
        }
        return "";
    }
};