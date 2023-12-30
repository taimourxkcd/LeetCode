class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> map;
        for(int i = 0; i < items1.size(); i++){
            map[items1[i][0]] = items1[i][1];
        }

        for(int i = 0; i < items2.size(); i++){
            if(map.find(items2[i][0]) != map.end()){
                map[items2[i][0]] += items2[i][1];
            }else{
                map[items2[i][0]] = items2[i][1];
            } 
        }

        vector<vector<int>> res;
        int i = 0;
         for(const auto& it:map){
              res.push_back({it.first, it.second});
        }

       // Sort the result vector based on the first element of each sub-vector (value)
        sort(res.begin(), res.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });

        return res;

    }

};