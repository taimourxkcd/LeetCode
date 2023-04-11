#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int findFibonachi(int n, vector<int> &dp) {
    if (n <= 1) {
        return n;
    }

    if (dp[n] != -1) return dp[n];

    return dp[n] = findFibonachi(n - 1, dp) + findFibonachi(n - 2, dp);
    

}

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

        int n;
        cin >> n;
        vector<int> dp(n + 1, -1);
        int ans = findFibonachi(n, dp);
        cout << ans << endl;
}
