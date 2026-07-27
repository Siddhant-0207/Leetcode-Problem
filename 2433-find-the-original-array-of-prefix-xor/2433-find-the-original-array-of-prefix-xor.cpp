class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       
        vector<int> ans;
        for(int i =0;i<pref.size();i++)
        {
            if(ans.empty())
            {
                ans.push_back(pref[0]);
            }
            else{
            int XOR = pref[i-1] ^ pref[i];
            ans.push_back(XOR);
            }
        }
        return ans;
    }
};