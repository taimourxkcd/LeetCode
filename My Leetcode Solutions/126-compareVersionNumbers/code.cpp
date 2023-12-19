class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector v1 = splitVersion(version1);
        vector v2 = splitVersion(version2);

        for(int i = 0; i < max(v1.size(), v2.size()); i++){
            int num1 = (i < v1.size()) ? v1[i] : 0;
            int num2 = (i < v2.size()) ? v2[i] : 0;

            if(num1 < num2) return -1;
            if(num1 > num2) return 1;

        }

        return 0;

    }

    vector<int> splitVersion(string version){
        vector<int> res;
        stringstream ss(version);
        string token;

        while(getline(ss, token, '.')){
            res.push_back(stoi(token));
        }
        
        return res;
    }
};