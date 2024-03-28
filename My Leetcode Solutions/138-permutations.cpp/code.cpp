class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(ans, nums, 0);
        return ans;
    }

    void helper(vector<vector<int>> &ans, vector<int> nums, int index){
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            helper(ans, nums, index + 1);
            swap(nums[index], nums[i]);
        }
    }
};