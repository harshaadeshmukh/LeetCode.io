class Solution {
public:
    int gcd(int a,int b)
    {
        return b==0?a:gcd(b,a%b);
    }

    string fractionAddition(string expr) {
        int n = expr.size();
        int i=0;

        int nume = 0;
        int deno = 1;

        while(i<n)
        {
            int currNume = 0;
            int currDeno = 0;

            bool isOp = (expr[i] == '-');

            if(expr[i]== '+' || expr[i] == '-')
            {
                i++;
            }

            while(i<n && isdigit(expr[i]))
            {
                int val = expr[i] - '0';
                currNume = (currNume*10) + val;
                i++;
            }

            i++;
            if(isOp == true)
            {
                currNume *= -1;
            }

            
            while(i<n && isdigit(expr[i]))
            {
                int val = expr[i] - '0';
                currDeno = (currDeno*10) + val;
                i++;
            }

            nume = nume *currDeno + currNume*deno;
            deno = deno * currDeno;

        }

        int gcd_num = abs(gcd(nume,deno));


        nume = nume / gcd_num;
        deno = deno / gcd_num;

        return to_string(nume) +"/" + to_string(deno);



        

        




    }
};