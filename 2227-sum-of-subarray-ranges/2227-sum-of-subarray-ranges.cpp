class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long  sum =0;
        int largest, smallest;
        for(int i=0;i<nums.size();i++)
        {
            largest = nums[i];
            smallest = nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                largest = max(largest,nums[j]);
                smallest = min(smallest , nums[j]);

                sum += (largest-smallest);
            }
        }
        return sum;
    }
};