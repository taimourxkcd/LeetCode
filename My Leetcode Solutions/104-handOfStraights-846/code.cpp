class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {

        if (hand.size() % groupSize != 0)
            return false;

        map<int, int> map;

        for (int card : hand)
            map[card]++;

        while (map.size() != 0)
        {
            int start = map.begin()->first;
            for (int i = 0; i < groupSize; i++)
            {
                if (map.count(start))
                {
                    map[start]--;
                    if (map[start] == 0)
                        map.erase(start);
                }
                else
                {
                    return false;
                }
                start++;
            }
        }
        return true;
    }
};