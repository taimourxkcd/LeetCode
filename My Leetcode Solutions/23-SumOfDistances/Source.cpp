#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;



    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> nums(n);
        vector<long long> res;

        for (int i = 0; i < n; i++) {
                cin >> nums[i];
        }


        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j] && i != j) {
                    ans += abs(i - j);
                }
            }
            res.push_back(ans);
            ans = 0;
        }
      

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }



    }
}
