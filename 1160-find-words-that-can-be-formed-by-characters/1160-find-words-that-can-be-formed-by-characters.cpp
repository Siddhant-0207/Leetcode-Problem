class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      int freq[26] ={0};
      for(char &c : chars){
        freq[c-'a']++;
      }
        int sum =0;
        
        for(string &s : words)
        {
            int wordFreq[26]={0};
            for(char &ch : s)
            {
                wordFreq[ch - 'a']++;
            }

            bool flag = true;
            for(int i =0;i<26;i++){
                if(wordFreq[i]>freq[i])
                {
                    flag = false;
                    break;
                }
            }

            if ( flag)
            {
                sum += s.size();
            }
            
        }
        return sum;
    }
};