#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include<queue>
using namespace std;



int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<int> nums(n);
        // populate nums vector
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> ans(n);

        int mid = n / 2;

        int start_ptr = 0;
        int mid_ptr = mid;

        for (int i = 0, k = 0 , j = 1; k < mid; i += 2, j += 2, k++) {
            ans[i] = nums[start_ptr];
            ans[j] = nums[mid_ptr];
            start_ptr++;
            mid_ptr++;
        }
 



    }
}