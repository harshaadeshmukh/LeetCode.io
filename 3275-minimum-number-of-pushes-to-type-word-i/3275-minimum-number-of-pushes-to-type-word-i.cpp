class Solution {
public:
    int minimumPushes(string word) {

       
        unordered_map<int,int> mp;
        int assign_key = 2;

        int result = 0;
        for(char ch : word)
        {
            if(assign_key>9)
            {
                assign_key=2;
            }
            mp[assign_key]++;
            result += mp[assign_key];
            assign_key++;

        }
        return result;
    }
};