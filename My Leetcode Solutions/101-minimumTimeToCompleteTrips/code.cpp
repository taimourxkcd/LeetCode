class Solution
{
public:
    long long minimumTime(vector<int> &time, int totalTrips)
    {
        // sort(time.begin(), time.end());

        long long l = 0;
        long long r = (long long)time[0] * totalTrips;

        while (l < r)
        {
            long long mid = l + (r - l) / 2;
            long long trips = 0;

            for (int t : time)
                trips += mid / t;

            if (trips < totalTrips)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        return l;
    }
};
