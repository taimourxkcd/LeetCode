class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<pair<int, int>> rowCount(3, pair<int, int>({0, 0})), colCount(3, pair<int, int>({0, 0}));
        pair<int, int> d1Count, d2Count;
        d1Count = {0, 0};
        d2Count = {0, 0};

        int count = 0;

        for (auto move : moves)
        {
            if (count % 2 == 0)
            {
                rowCount[move[0]].first++;
                if (rowCount[move[0]].first == 3)
                    return "A";

                colCount[move[1]].first++;
                if (colCount[move[1]].first == 3)
                    return "A";

                if (move[0] == move[1])
                {
                    d1Count.first++;
                    if (d1Count.first == 3)
                        return "A";
                }
                if ((move[0] == 1 && move[1] == 1) || abs(move[0] - move[1]) == 2)
                {
                    d2Count.first++;
                    if (d2Count.first == 3)
                        return "A";
                }
            }
            else
            {
                rowCount[move[0]].second++;
                if (rowCount[move[0]].second == 3)
                    return "B";

                colCount[move[1]].second++;
                if (colCount[move[1]].second == 3)
                    return "B";

                if (move[0] == move[1])
                {
                    d1Count.second++;
                    if (d1Count.second == 3)
                        return "B";
                }
                if ((move[0] == 1 && move[1] == 1) || abs(move[0] - move[1]) == 2)
                {
                    d2Count.second++;
                    if (d2Count.second == 3)
                        return "B";
                }
            }
            count++;
        }
        return count == 9 ? "Draw" : "Pending";
    }
};