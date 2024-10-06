class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        sort(s1.begin(),s1.end());

        if(n>m)
        {
            return false;
        }

        for(int i=0;i<=m-n;i++)
        {
            string new_s = s2.substr(i,n);

            sort(new_s.begin(),new_s.end());

            if(new_s==s1)
            {
                return true;
            }
        }
        return false;
    }
};