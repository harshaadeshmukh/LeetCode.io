class Solution {
public:
    int countPrimes(int n) {

        if(n<2)
        {
            return 0;
        }
        vector<int> ans(n,0);

        for(long i=2;i<n;i++)
        {
            if(ans[i]==0)
            {
                for(long j=i*i;j<n;j+=i)
                {
                    ans[j]=1;
                }
            }
        }

        int count = 0;
        for(int i=2;i<n;i++)
        {
            if(ans[i]==0)
            {
                count++;
            }
        }
        return count;
    }
};