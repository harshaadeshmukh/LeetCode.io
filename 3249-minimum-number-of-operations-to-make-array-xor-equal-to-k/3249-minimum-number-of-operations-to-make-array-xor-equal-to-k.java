class Solution {
    public int minOperations(int[] nums, int k) {
        int total_min = 0;
        for(int it : nums)
        {
            total_min ^= it;
        }

        int ans = total_min ^ k;

        return Integer.bitCount(ans);
    }
}