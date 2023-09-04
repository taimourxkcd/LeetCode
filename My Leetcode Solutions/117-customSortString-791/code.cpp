
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> map;
        string res = "";
        for (char c : s) map[c]++;

        for(int i = 0; i < order.size(); i++){
            if(map.count(order[i])) {
                while(map[order[i]] != 0){
                    res += order[i];
                    map[order[i]]--;    
                } 
            }
        
            map.erase(order[i]);  

        }

        while(!map.empty()) {
        auto it = map.begin(); 
        res += std::string(it->second, it->first); 
        map.erase(it->first); 
    }

    return res;

    }
};

