class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        helper(nums, 0, temp);
        return ans;
    }

    void helper(vector<int> nums, int i, vector<int> temp){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }

        // include the no
        helper(nums, i + 1, temp);
        temp.push_back(nums[i]);
        // exclude the no
        helper(nums, i + 1, temp);
    }
};