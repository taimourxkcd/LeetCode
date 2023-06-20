class Solution
{
public:
    int maxArea = 0;

    int countNeighbours(vector<vector<int>> &grid, int i, int j, int &count)
    {
        // check if it is out of bounds
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
            return 0;

        if (grid[i][j] == 0)
            return 0; // useless neighbour

        grid[i][j] = 0; // mark as visited

        if (countNeighbours(grid, i - 1, j, count) == 1)
            count++; // above
        if (countNeighbours(grid, i + 1, j, count) == 1)
            count++; // below
        if (countNeighbours(grid, i, j - 1, count) == 1)
            count++; // left
        if (countNeighbours(grid, i, j + 1, count) == 1)
            count++; // right

        return 1;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {

        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    int count = 1;
                    countNeighbours(grid, i, j, count);
                    maxArea = max(maxArea, count);
                }
            }
        }
        return maxArea;
    }
};