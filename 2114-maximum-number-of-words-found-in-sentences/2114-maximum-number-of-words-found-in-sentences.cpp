class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi =0;
        for(auto& it : sentences)
        {
            int cnt=1;
            for(int i=0;i<it.size();i++)
            {
                if(it[i]==' ')
                {
                    cnt++;
                   
                }
                
            }
             maxi=max(maxi,cnt);
        }
        return maxi;
    }
};