class Solution {
public:
    bool isPalindrome(string s, int start , int ends)
    {
        while(start<=ends)
        {
            if(s[start++]!=s[ends--])
            {
                return false;
            }
        }
        return true;
    }
    void backTrack(string &s,int idx,vector<string> curr, vector<vector<string>> &result)
    {
        if(idx==s.size())
        {
            result.push_back(curr);
            return;
        }

        for(int i=idx; i<s.size();i++)
        {
            if(isPalindrome(s,idx,i))
            {
                curr.push_back(s.substr(idx,i-idx+1));

                backTrack(s,i+1 , curr, result);

                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> result;
        vector<string> curr ;

        backTrack(s,0,curr ,result);
        return result;
    }
};