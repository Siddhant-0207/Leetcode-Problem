class Solution {
public:
    int numberOfSubstrings(string s) {
        int maxlen =0;
        int cnt=0;
        int r=0;
        int lastseen[3]={-1,-1,-1};
        while(r<s.size())
        {
            lastseen[s[r]-'a']=r;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1)
            {
                cnt +=(1+ min(lastseen[0],min(lastseen[1],lastseen[2])));
            }
            r++;
        }
        return cnt;
    }
};