class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = nums[n-1] - nums[0];

        for(int i = 0; i < nums.size()-1; i++){
            int j = i +1;
            int low = min(nums[0] + k, nums[j] - k);
            int high = max(nums[n-1] - k, nums[i] + k);
            int gap = high - low;
            res = min(res, gap);
        }

        return res;
    }
};