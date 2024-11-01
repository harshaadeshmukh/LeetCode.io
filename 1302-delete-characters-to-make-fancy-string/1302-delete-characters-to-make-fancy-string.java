class Solution {
    public String makeFancyString(String s) {
        StringBuilder otp = new StringBuilder();

        int freq = 1;

        otp.append(s.charAt(0));

        for(int i=1;i<s.length();i++)
        {
            if(s.charAt(i)==otp.charAt(otp.length()-1))
            {
                freq++;
                if(freq<3)
                {
                    otp.append(s.charAt(i));
                }
            }
            else{
                    otp.append(s.charAt(i));
                    freq=1;
            }
        }

        return otp.toString();
    }
}