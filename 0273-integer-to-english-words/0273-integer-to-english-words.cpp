class Solution {
public:

     // Unordered maps to store words for numbers less than 10, 20, and 100
    unordered_map<int, string> belowTen = { {0, ""}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"} };
    unordered_map<int, string> belowTwenty = { {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"} };
    unordered_map<int, string> belowHundred = { {1, "Ten"}, {2, "Twenty"}, {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"}, {6, "Sixty"}, {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"} };


    string solve(int num) {
        if(num < 10) {
            return belowTen[num];
        }

        if(num < 20) {
            return belowTwenty[num];
        }

        if(num < 100) { //89 = "Eighty Nine"
            return belowHundred[num/10] + ((num%10 != 0) ? " " + belowTen[num%10] : "");
        }

        if(num < 1000) { //879/100 = 8 "Eight"
            return solve(num/100) + " Hundred" + ((num%100 != 0) ? " " + solve(num%100) : "");
        }

        if(num < 1000000) {
            return solve(num/1000) + " Thousand" + ((num%1000 != 0) ? " " + solve(num%1000) : "");
        }

        if(num < 1000000000) {
            return solve(num/1000000) + " Million" + ((num%1000000 != 0) ? " " + solve(num%1000000) : "");
        }

        return solve(num/1000000000) + " Billion" + ((num%1000000000 != 0) ? " " + solve(num%1000000000) : "");
    }

    string numberToWords(int num) {
        if(num == 0) {
            return "Zero";
        }

        return solve(num);
    }
};

//   vector<pair<int, string>> mpp = {{1000000000, "Billion"},
//                                      {1000000, "Million"},
//                                      {1000, "Thousand"},
//                                      {100, "Hundred"},
//                                      {90, "Ninety"},
//                                      {80, "Eighty"},
//                                      {70, "Seventy"},
//                                      {60, "Sixty"},
//                                      {50, "Fifty"},
//                                      {40, "Forty"},
//                                      {30, "Thirty"},
//                                      {20, "Twenty"},
//                                      {19, "Nineteen"},
//                                      {18, "Eighteen"},
//                                      {17, "Seventeen"},
//                                      {16, "Sixteen"},
//                                      {15, "Fifteen"},
//                                      {14, "Fourteen"},
//                                      {13, "Thirteen"},
//                                      {12, "Twelve"},
//                                      {11, "Eleven"},
//                                      {10, "Ten"},
//                                      {9, "Nine"},
//                                      {8, "Eight"},
//                                      {7, "Seven"},
//                                      {6, "Six"},
//                                      {5, "Five"},
//                                      {4, "Four"},
//                                      {3, "Three"},
//                                      {2, "Two"},
//                                      {1, "One"}};
//     string numberToWords(int num) {
//         if(num == 0) return "Zero";
//         for (auto it : mpp) {
//             if (num >= (it.first)) {
//                 string a = "";
//                 if (num >= 100) {
//                     a = numberToWords(num / it.first) + " ";
//                 }
//                 string b = it.second;
//                 string c = "";
//                 if (num % it.first != 0) {
//                     c = " " + numberToWords(num % (it.first));
//                 }
//                 return a + b + c;
//             }
//         }
//         return "";
//     }