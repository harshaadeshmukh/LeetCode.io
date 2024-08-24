class Solution {
public:
    long func(long firstHalf , bool isEven)
    {
        long resultNum = firstHalf;

        if(isEven == false)
        {
            firstHalf /=10;
        }

        while(firstHalf > 0)
        {
            int digit = firstHalf % 10;
            resultNum = (resultNum *10) + digit;
            firstHalf/=10;
        }

        return resultNum;
    }
    string nearestPalindromic(string n) {

        int size = n.length();
        int mid = size/2;

        int firstHalfLength = (size%2==0)?mid:(mid+1);

        long firstHalf = stol(n.substr(0,firstHalfLength));

        vector<long> possibleResults;
        possibleResults.push_back(func(firstHalf,size%2==0));
        possibleResults.push_back(func(firstHalf+1,size%2==0));
        possibleResults.push_back(func(firstHalf-1,size%2==0));
        possibleResults.push_back((long)pow(10,size-1)-1);
        possibleResults.push_back((long)pow(10,size)+1);


        long diff = LONG_MAX;
        long result = INT_MAX;
        long originNum = stol(n);

        for(long num : possibleResults)
        {
            if(num==originNum)
            {
                continue;
            }
            if(abs(num-originNum) < diff)
            {
                diff = abs(num-originNum);
                result = num;
            }
            else if(abs(num-originNum) == diff)
            {
                result = min(result,num);
            }
        }
        return to_string(result);
        
    }
};