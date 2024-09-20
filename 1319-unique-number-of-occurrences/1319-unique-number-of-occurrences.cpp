class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto num : arr)
        {
            mp[num]++;
        }
        unordered_set<int> st;
        for(auto m : mp)
        {
            if(st.find(m.second)!=st.end())
            {
                return false;
            }
            st.insert(m.second);
        }
        return true;
    }
};