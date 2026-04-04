class Solution {
public:
    string trimTrailingVowels(string s) {
        string res= "";
        set<char> vol ={'a','e','i','o','u'};
        for(int i = s.size()-1;i>=0;i--)
        {
            if(vol.find(s[i]) != vol.end())
            {
                continue;
            }
            else 
            return res = s.substr(0,i+1);
            
        }
        return res ;
         
    }
};