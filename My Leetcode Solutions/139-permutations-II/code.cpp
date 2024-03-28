class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int num : nums) map[num]++;
        vector<int> curr;
        helper(ans, nums, map, curr);
        return ans;
        
    }

    void helper(vector<vector<int>> &ans, vector<int> nums, unordered_map<int, int> map, vector<int> curr){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }


        for(auto& [num, count] : map ){
            if(count > 0){
                count--;
                curr.push_back(num);
                helper(ans, nums, map, curr);
                curr.pop_back();
                count++;



            }
        }
    }
};