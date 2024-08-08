class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> st = new Stack<>();

        StringBuilder result = new StringBuilder();

        for(int i=0;i<s.length();i++)
        {
            if(st.empty() || st.peek()!= s.charAt(i))
            {
                st.push(s.charAt(i));
            }
            else{
                st.pop();
            }
        }

        while(!st.empty())
        {
            result.append(st.pop());
        }

        return result.reverse().toString();

      
    }
}