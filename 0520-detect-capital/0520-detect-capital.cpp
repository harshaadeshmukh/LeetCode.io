class Solution {
public:
    bool allCaptial(string word)
    {
        for(char &ch : word)
        {
            if(ch<'A' || ch>'Z')
            {
                return false;
            }
        }
        return true;
    }

    bool allSmall(string word)
    {
        for(char &ch : word)
        {
            if(ch<'a' || ch>'z')
            {
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        
        if(allCaptial(word) || allSmall(word) || allSmall(word.substr(1)))
        {
            return true;
        }
        return false;
    }
};