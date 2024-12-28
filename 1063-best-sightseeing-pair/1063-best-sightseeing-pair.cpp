class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       vector<int> temp(values.size(),0);

       temp[0] = values[0] + 0;

       for(int i=1;i<values.size();i++)
       {
            temp[i] = max(values[i]+i , temp[i-1]);
       }

       int result = 0;

       for(int i=1;i<values.size();i++)
       {
            int j_num = values[i] - i;
            int i_num = temp[i-1];

            result = max(result,i_num + j_num);
       }
       return result;
    }
};