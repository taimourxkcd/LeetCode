class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1)
            return n;
        else
            return climbStairs(n-1) + climbStairs(n-2);   

    }
};