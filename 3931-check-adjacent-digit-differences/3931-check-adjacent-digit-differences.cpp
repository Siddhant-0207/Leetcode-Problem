class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
         int n = s.size();
        for(int i =0;i<n-1;i++)
        {

            int difference = abs((s[i]-'0') - (s[i+1]-'0'));
            if(difference>2){
                return false ;
                break;
            }
        }
        return true;
    }
};