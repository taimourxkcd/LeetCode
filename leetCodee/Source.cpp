#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
#include<unordered_map>

using namespace std;

int rob(vector<int>& nums) {
    int prev1 = 0;
    int prev2 = 0;

    for (const int num : nums) {
        const int dp = max(prev1, prev2 + num);
        prev2 = prev1;
        prev1 = dp;
    }

    return prev1;
}

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    


    vector<int> nums = { 1 , 2, 3, 1 };
    rob(nums);
         
    return 0;
}
