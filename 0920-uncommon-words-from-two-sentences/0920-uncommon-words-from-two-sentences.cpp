class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> st;

        stringstream st1(s1);
        string word="";
        while(st1 >> word)
        {
            mp[word]++;
        }

        stringstream st2(s2);
        word="";
        while(st2 >> word)
        {
            mp[word]++;
        }

        for(auto it : mp)
        {
            if(it.second==1)
            {
                st.push_back(it.first);
            }
        }
        return st;
    }
};