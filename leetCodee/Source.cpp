#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < nums.size(); i++)    
        {
            cin >> nums[i];
        }
        int ans = 0;
        int maxSum = nums[0], curSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            ans = curSum + nums[i];
            curSum = max(nums[i], ans);
            maxSum = max(maxSum, curSum);
        }

        cout << maxSum << endl;
    }
}
