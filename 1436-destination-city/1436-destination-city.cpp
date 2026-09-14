class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string , int> mpp;
        string ans = "";
        for(int i =0;i<paths.size();i++)
        {
            mpp[paths[i][0]] =1;
           
        }

        for(auto &path : paths)
        {
            string dest = path[1];
            if(mpp[dest]!=1)
            {
                return dest;
            }
        }
        return ans;
    }
};