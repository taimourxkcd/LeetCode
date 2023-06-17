class Solution
{
public:
    int scoreOfParentheses(string s)
    {
        stack<int> stk;
        int score = 0;

        for (char brkt : s)
        {
            if (brkt == '(')
            {
                stk.push(score);
                score = 0;
            }
            else
            {
                if (score == 0)
                {
                    score = 1;
                }
                else
                {
                    score *= 2;
                }

                score += stk.top();
                stk.pop();
            }
        }
        return score;
    }
};