class Solution {
public:
    int scoreOfString(string s) {
        int total=0;
        for(int i =0 ;i<s.size()-1;i++)
        {
            char current = s[i];
            char next = s[i+1];
          total += abs(int(current) - int(next));
        }
        return total;
    }
};