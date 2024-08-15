class Solution {
    public int deleteAndEarn(int[] nums) {
        int [] total = new int[10001];
        for(int i=0;i<nums.length;i++)
        {
            total[nums[i]]++;
        }

        int prevPoint = 0;
        int nextPoint = 0;

        for(int i=1;i<10001;i++)
        {
            int c = nextPoint + total[i]*i;
            nextPoint = Math.max(nextPoint,prevPoint);
            prevPoint = c;
        }
        return Math.max(prevPoint,nextPoint);
    }
}