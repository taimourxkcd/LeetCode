class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int bot = matrix.size() - 1;

        // binary search for finding rows
        while (top <= bot)
        {
            int mid = (top + bot) / 2; // this is mid row

            if (target > matrix[mid][col - 1])
            {
                top = mid + 1;
            }
            else if (target < matrix[mid][0])
            {
                bot = mid - 1;
            }
            else
            {
                break;
            }

            if (top > bot)
            {
                return false;
            }
        }

        int mid_row = (top + bot) / 2;

        int l = 0;
        int r = matrix[mid_row].size() - 1;

        while (l <= r)
        {
            int m = l + (r - l) / 2; // Update the value of `m`

            if (target > matrix[mid_row][m])
            {
                l = m + 1;
            }
            else if (target < matrix[mid_row][m])
            {
                r = m - 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};