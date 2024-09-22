class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        map<int,vector<int>> mp;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> temp;   
        bool flag = true;
        for(auto it : mp)
        {
            if(flag)
            {
                reverse(begin(it.second),end(it.second));
            }
            for(int &num : it.second)
            {
                temp.push_back(num);
            }
            flag = !flag;
        }
        return temp;
    }
};