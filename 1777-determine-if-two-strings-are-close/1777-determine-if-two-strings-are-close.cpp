class Solution {
public:
    bool closeStrings(string word1, string word2) {

        int size1 = word1.size();
        int size2 = word2.size();
        vector<int> freq1(26);
        vector<int> freq2(26);

        if(size1 != size2)
        {
            return false;
        }

        for(int i=0;i<size1;i++)
        {
            char ch1 = word1[i];
            char ch2 = word2[i];

            int idx1 = ch1 - 'a';
            int idx2 = ch2 - 'a';

            freq1[idx1]++;
            freq2[idx2]++;
        }

        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=0 && freq2[i]!=0)
            {
                continue;
            }

            if(freq1[i]==0 && freq2[i]==0)
            {
                continue;
            }
            return false;
        }

        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());


        return freq1==freq2;



    }
};