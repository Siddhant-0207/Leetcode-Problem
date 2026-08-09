class Solution {
public:
    int findClosest(int x, int y, int z) {
         int pos1 = abs(x - z);
        int pos2 = abs(y - z);
        if (pos1 == pos2) {
            return 0;
        }
        int check = (pos1 < pos2) ? 1 : 2;
        return check;
    }
};