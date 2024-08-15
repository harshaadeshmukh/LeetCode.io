class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {

        vector<int> total(10001);
        for(int i=0;i<nums.size();i++)
        {
            total[nums[i]]++;
        }

        int prevPoint = 0;
        int nextPoint = 0;
        for(int i=1;i<10001;i++)
        {
            int c = nextPoint + total[i]*i;
            nextPoint = max(nextPoint,prevPoint);
            prevPoint = c;
        }    
        return max(prevPoint,nextPoint);

    }
};