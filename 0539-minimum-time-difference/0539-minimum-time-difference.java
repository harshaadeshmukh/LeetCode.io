class Solution {
    public int findMinDifference(List<String> timePoints) {
        int n = timePoints.size();
        List<Integer> ans = new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            String s = timePoints.get(i);
            int hourTime = Integer.parseInt(s.substring(0,2));
            int minTime = Integer.parseInt(s.substring(3));

            ans.add((hourTime*60 + minTime)); 
        } 
        Collections.sort(ans);

        int result = Integer.MAX_VALUE;

        for(int i=1;i<n;i++)
        {
            result = Math.min(result,ans.get(i)-ans.get(i-1));
        }

        return Math.min(result,(24*60-ans.get(n-1))+ans.get(0));
    }
}