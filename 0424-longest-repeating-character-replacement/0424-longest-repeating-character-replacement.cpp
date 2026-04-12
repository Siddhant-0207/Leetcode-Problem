class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0;
        int r =0 ;
        vector<int> hash (26,0);
        int maxF =0;
        int maxlen=0;
        while(r<s.size())
        {
            hash[s[r]-'A']++;
            maxF=max(maxF,hash[s[r]-'A']);
            if(((r-l+1)-maxF)>k)
            {
                hash[s[l]-'A']--;
                maxF--;
                l++;
            }
            if(((r-l+1)-maxF)<=k)
            {
                maxlen=max(maxlen,(r-l+1));

            }
            r++;


        }
        return maxlen;
        
    }
};