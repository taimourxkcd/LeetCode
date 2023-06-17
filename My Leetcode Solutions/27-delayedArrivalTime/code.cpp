class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        int ans = arrivalTime + delayedTime;
        ans = ans % 24;
        return ans;
    }
};