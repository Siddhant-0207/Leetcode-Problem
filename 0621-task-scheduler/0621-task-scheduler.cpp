class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> hashMap(26, 0);
        for (char& ch : tasks)
            hashMap[ch - 'A']++;

        int time = 0;
        priority_queue<int> pq;
        for (int i = 0; i < 26; i++) {
            if (hashMap[i] > 0) {
                pq.push(hashMap[i]);
            }
        }

        while (!pq.empty()) {
            vector<int> temp;

            for (int i = 1; i <= n + 1; i++) {
                if(pq.empty())  break;
                int freq = pq.top();
                pq.pop();
                freq--;
                temp.push_back(freq);
            }

            for (int &f : temp) {
                if (f > 0) {
                    pq.push(f);
                }
            }
            if (pq.empty()) {
                time += temp.size();
            } else {
                time += n + 1;
            }
        }
        return time;
    }
};