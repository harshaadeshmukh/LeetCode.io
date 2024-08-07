class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
           int j=i+1;
           int k=nums.size()-1;

           while(j<k)
           {
                int sum = nums[i];
                sum +=nums[j];
                sum += nums[k];

                if(sum==0)
                {
                    vector<int> mp = {nums[i],nums[j],nums[k]};
                    ans.insert(mp);
                    j++;
                    k--;
                }

                else if(sum > 0)
                {
                    k--;
                }
                else{
                    j++;
                }
           }
        }

        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
    }
};