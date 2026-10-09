class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxiD=0;
        int maxiA =0;
        for(auto&  d : dimensions){
            int dignoal = d[0]*d[0] + d[1]*d[1];
            int area = d[0]*d[1];

            if(dignoal > maxiD)
            {
                maxiD = dignoal;
                maxiA = area;
            }
            else if (dignoal == maxiD)
            {
                if(maxiA < area){
                    maxiA = area;
                }
            }
        }
        return maxiA;

    }
};