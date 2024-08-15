class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
     vector<int> ans(10001); 
     for(int i=0;i<nums.size();i++)   
     {
        ans[nums[i]]++;
     }

     int dp = 0;
     int ep = 0;
     for(int i=1;i<10001;i++)
     {
        int c = ep + ans[i]*i;
        ep = max(ep,dp);
        dp = c;
     }

     return max(ep,dp);

    }
};