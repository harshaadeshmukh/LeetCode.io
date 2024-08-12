class Solution {
    public long subArrayRanges(int[] nums) {
       long sum = 0;
       int largest , smallest;
       for(int i=0;i<nums.length;i++)
       {
        largest = nums[i];
        smallest = nums[i];
        for(int j=i+1;j<nums.length;j++)
        {
            largest = Math.max(largest,nums[j]);
            smallest = Math.min(smallest,nums[j]);

            sum += (largest-smallest);
        }
       }
       return sum;
    }
}