class Solution {
public:
    int maxDistinct(string s) {
        map<char,int> hashmap;
        for(int i =0; i<s.length();i++)
        {
            hashmap[s[i]]++;

        }
        return  hashmap.size();
    }
};