class Solution {
    public:
    int get_strength(char ch){
        if('a'<=ch && ch<= 'z'){
            return 1;
        }
        else if ('A'<=ch && ch<='Z'){
            return 2;
        }
        else if ('0'<=ch && ch<='9'){
            return 3;
        }
        else if ( ch=='!' || ch=='@'|| ch=='#' || ch=='$'){
            return 5;
        }
        return 0;
    }
public:
    int passwordStrength(string password) {
        unordered_set<char> uniq(password.begin(),password.end());
        int strength =0;
        for(char ch : uniq)
        {
            strength+= get_strength(ch);
        }
        return strength;
    }
};