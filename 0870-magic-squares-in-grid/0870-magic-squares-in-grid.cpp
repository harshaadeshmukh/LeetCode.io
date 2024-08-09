class Solution {
public:

    bool isGrid(vector<vector<int>>grid,int row,int col)
    {
        unordered_set<int>st;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int num = grid[row+i][col+j];
                if(num<1 || num>9 || st.count(num))
                {
                    return false;
                }
                else{
                    st.insert(num);
                }
            }
        }

        int sum = grid[row][col] + grid[row+1][col+1] + grid[row+2][col+2];
        for(int i=0;i<3;i++)
        {
            if( grid[row+i][col] + grid[row+i][col+1] + grid[row+i][col+2] != sum)
            {
                return false;
            }

            if(grid[row][col+i] + grid[row+1][col+i] + grid[row+2][col+i] != sum)
            {
                return false;
            }
        }

        if(grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2] != sum)
        {
            return false;
        }
        if(grid[row][col+2] + grid[row+1][col+1] + grid[row+2][col] != sum)
        {
            return false;
        }

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid.size();

        int count=0;
        for(int i=0 ; i<=row-3 ; i++)
        {
            for(int j=0 ; j<=col-3 ; j++)
            {
                if(isGrid(grid,i,j))
                {
                    count++;
                }
            }
        }
        return count;

    }
};