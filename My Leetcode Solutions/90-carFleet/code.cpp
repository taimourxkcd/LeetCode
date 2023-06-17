class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        int n = position.size();

        // create a new pair with the
        vector<pair<int, float>> carTime(n);

        for (int i = 0; i < position.size(); i++)
        {
            carTime[i].first = position[i];
            carTime[i].second = (float)(target - position[i]) / speed[i];
        }

        sort(carTime.begin(), carTime.end());

        float max = INT_MIN;
        int count = 0;
        for (int i = carTime.size() - 1; i >= 0; i--)
        {
            if (carTime[i].second > max)
            {
                max = carTime[i].second;
                count++;
            }
        }

        return count;
    }
};