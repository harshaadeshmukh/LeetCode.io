class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        unordered_set<string> st;
        string temp = to_string(x) + "_" + to_string(y);
        st.insert(temp);

        for(char &ch : path)
        {
            if(ch=='E')
            {
                x++;
            }
            else if(ch=='W')
            {
                x--;
            }
            else if(ch=='N')
            {
                y++;
            }
            else{
                y--;
            }

             temp = to_string(x) + "_" + to_string(y);
            if(st.find(temp)!=st.end())
            {
                return true;
            }
            st.insert(temp);
        }
        return false;
    }
};