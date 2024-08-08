class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string result = "";
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() ||  st.top()!=s[i])
            {
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        while(!st.empty())
        {
            result +=st.top();
            st.pop();
        }
         reverse(result.begin(),result.end());
        return result;

    }
};