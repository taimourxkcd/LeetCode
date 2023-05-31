class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {

        stack<int> pushStk;
        stack<int> popStk;

        int i = 0;
        for (int n : pushed)
        {
            pushStk.push(n);

            while (pushStk.size() > 0 && pushStk.top() == popped[i])
            {
                pushStk.pop();
                i++;
            }
        }
        return pushStk.size() == 0;
    }
};