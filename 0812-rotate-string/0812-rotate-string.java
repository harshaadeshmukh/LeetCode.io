class Solution {
    public boolean rotateString(String s, String goal) {
        // for(int i=0;i<s.length();i++)
        // {
        //     s = s.substring(1) + s.substring(0,1);

        //     if(s.equals(goal))
        //     {
        //         return true;
        //     }
        // }
        // return false;

        if(s.length()!=goal.length())
        {
            return false;
        }
        String new_s = s+s;

        if(new_s.contains(goal))
        {
            return true;
        }
        return false;
    }
}