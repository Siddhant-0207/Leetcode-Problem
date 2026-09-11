class Solution {
public:
    char findTheDifference(string s, string t) {
        char  res =0;
        for(char ch : s)  res ^= ch;
        for(char c : t) res ^= c;
        return res;
    }
};