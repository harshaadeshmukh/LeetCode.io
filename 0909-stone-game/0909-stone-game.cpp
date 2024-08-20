class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice = 0 , bob = 0;
        int n = piles.size();

        for(int i=0;i<n/2;i++)
        {
            alice += max(piles[i], piles[n-i-1]);
            bob += min(piles[i],piles[n-i-1]); 
        }

        if(alice > bob)
        {
            return true;
        }
        return false;
    }
};