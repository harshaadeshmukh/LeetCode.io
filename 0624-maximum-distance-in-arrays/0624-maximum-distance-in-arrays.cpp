class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxi = arrays[0].back();
        int mini = arrays[0].front();

        int result = 0;
        for(int i=1;i<arrays.size();i++)
        {
            int currMax = arrays[i].back();
            int currMin = arrays[i].front();

            result = max({result , abs(currMin - maxi) , abs(currMax-mini)});

            maxi = max(maxi,currMax);
            mini = min(mini,currMin);
        }
        return result;
    }
};