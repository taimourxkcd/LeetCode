class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> map1;
        vector<int> res;
        int countInt = 0;
        int countPair = 0;
        for(int num : nums) map1[num]++;

        for(auto it:map1){
            countPair += it.second/2;
            countInt += it.second%2;
        }
        res.push_back(countPair);
        res.push_back(countInt);
        return res;
    }
};