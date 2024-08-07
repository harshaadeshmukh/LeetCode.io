class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int ans = target - nums[i];

        //     if(mp.find(ans)!=mp.end())
        //     {
        //         return {mp[ans],i};
        //     }

        //     mp[nums[i]] = i;
        // }


        // return {};

         vector <int> c ;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {  
                    c.push_back(i);
                    c.push_back(j);     
                    break;
                }
            }
          
        }
        return c;


    }
};