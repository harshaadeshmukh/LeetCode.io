class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total_min = 0;
        for(auto it : nums)
        {
            total_min ^= it; 
        }

        int ans = total_min ^ k ;

        return __builtin_popcount(ans);
    }
};