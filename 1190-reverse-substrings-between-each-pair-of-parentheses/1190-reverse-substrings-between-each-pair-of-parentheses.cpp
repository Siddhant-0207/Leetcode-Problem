class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(i+1);
        }
        else if (s[i]==')')
        {
            int index = st.top();
            reverse(s.begin()+index,s.begin()+i);
            st.pop(); 
        }
    }
    string ans = "";
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]=='('  || s[i]==')')
        {
            continue;
        }
        else {
            ans.push_back(s[i]);
        }
    }
    return ans;
    }
};