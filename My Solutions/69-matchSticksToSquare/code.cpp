class Solution
{
public:
    bool makesquare(vector<int> &matchsticks)
    {

        if (matchsticks.size() == 0)
            return false;

        vector<int> ans(4, 0);

        int sum = 0;
        for (int i = 0; i < matchsticks.size(); i++)
        {
            sum += matchsticks[i];
        }

        int target = sum / 4;
        sort(matchsticks.begin(), matchsticks.end(), greater<int>()); // second optimization

        return dfs(matchsticks, target, ans, 0);
    }

    bool dfs(vector<int> matchsticks, int target, vector<int> &ans, int idx)
    {

        // base case
        if (idx == matchsticks.size())
        {
            if (ans[0] == ans[1] && ans[1] == ans[2] && ans[2] == ans[3])
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        for (int i = 0; i < 4; i++)
        {

            if (ans[i] + matchsticks[idx] > target)
                continue; // optimization 1

            // optimization 3 start
            int j = i - 1;
            while (j >= 0)
            {
                if (ans[j] == ans[i])
                {
                    break;
                }
                j -= 1;
            }

            if (j != -1)
                continue;
            // optimization 3 end

            ans[i] += matchsticks[idx];
            if (dfs(matchsticks, target, ans, idx + 1))
            { // go down the whole recursion tree
                return true;
            }
            ans[i] -= matchsticks[idx]; // backtrack if you didnt find sol down one recursion tree
        }

        return false;
    }
};