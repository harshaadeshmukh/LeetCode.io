class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int start=j+1;
                int end = nums.size()-1;
            
                while(start<end)
                {
                    long long sum = nums[i];
                    sum +=nums[j];
                    sum +=nums[start];
                    sum +=nums[end];

                    if(sum>target)
                    {
                        end--;
                    }   
                    else if(sum<target)
                    {
                        start++;
                    }
                    else{
                        vector<int> mp = {nums[i],nums[j],nums[start],nums[end]};
                        output.insert(mp);
                        start++;
                        end--;
                    }
                }
            }
        }

        vector<vector<int>> result_val(output.begin(),output.end());
        return result_val;
    }
};