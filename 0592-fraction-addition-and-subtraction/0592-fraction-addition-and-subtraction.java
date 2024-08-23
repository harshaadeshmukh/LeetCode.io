class Solution {

    int gcd_num(int a, int b) {
        return b == 0 ? a : gcd_num(b, a % b);
    }

    public String fractionAddition(String exp) {
        int i = 0;
        int numo = 0; // Numerator
        int deno = 1; // Denominator

        int n = exp.length();

        while (i < n) {
            int currNumo = 0;
            int currDeno = 0;
            boolean isOp = (exp.charAt(i) == '-');

            // Skip the operator character if it's '+' or '-'
            if (exp.charAt(i) == '+' || exp.charAt(i) == '-') {
                i++;
            }

            // Read the numerator
            while (i < n && Character.isDigit(exp.charAt(i))) {
                int val = exp.charAt(i) - '0';
                currNumo = (currNumo * 10) + val;
                i++;
            }

            // Skip the '/' character
            i++;

            // If the operator was '-', make the numerator negative
            if (isOp == true) {
                currNumo *= -1;
            }

            // Read the denominator
            while (i < n && Character.isDigit(exp.charAt(i))) {
                int val = exp.charAt(i) - '0';
                currDeno = (currDeno * 10) + val;
                i++;
            }

            // Combine the current fraction with the running total
            numo = numo * currDeno + currNumo * deno;
            deno = deno * currDeno;
        }

        // Simplify the resulting fraction
        int gcd = Math.abs(gcd_num(numo, deno));
        numo /= gcd;
        deno /= gcd;

        return numo + "/" + deno;
    }
}
