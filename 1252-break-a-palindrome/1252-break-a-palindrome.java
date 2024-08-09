class Solution {
    public String breakPalindrome(String palindrome) {
        
        int n = palindrome.length();
        if(n==1)
        {
            return "";
        }

        char[] charArray = palindrome.toCharArray();

        for(int i=0;i<n/2;i++)
        {
            if(charArray[i]!='a')
            {
                charArray[i] = 'a';
                return new String(charArray);
            }
        }
        charArray[n-1] = 'b';
        return  new String(charArray);
    }
}