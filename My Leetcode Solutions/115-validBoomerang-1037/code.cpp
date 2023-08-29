class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
          int slope1_numerator = points[1][1] - points[0][1];
        int slope1_denominator = points[1][0] - points[0][0];
        
        int slope2_numerator = points[2][1] - points[0][1];
        int slope2_denominator = points[2][0] - points[0][0];
        
        if ((slope1_numerator == 0 && slope1_denominator == 0) || (slope2_numerator == 0 && slope2_denominator == 0)) {
            return false;
        }
    if (slope1_numerator * slope2_denominator == slope2_numerator * slope1_denominator) {
            return false;
        }
        
        return true;

    }
};
