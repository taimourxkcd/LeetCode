class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
     unordered_map<string, int> map;
     for(int i = 0; i < paths.size(); i++){
         map[paths[i][0]]++;
     }   
     
    for(int i = 0; i < paths.size(); i++){
         if(map[paths[i][1]] < 1){
             return paths[i][1];
         } 
     }   
     return "";
    }
};