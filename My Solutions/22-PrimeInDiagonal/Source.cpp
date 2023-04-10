#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int isPrime(int n) {

    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


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
        vector<vector<int>> nums(n, vector<int>(n));
        vector<int> res;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> nums[i][j];
              }

        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    if (isPrime(nums[i][j])) {
                        res.push_back(nums[i][j]);
                    }

                }
              }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    if (isPrime(nums[i][j])) {
                        res.push_back(nums[i][j]);
                    }
                }
            }
        }

       
        sort(res.begin(), res.end());  // sort the vector

        auto last = std::unique(res.begin(), res.end());  // remove duplicates

        res.erase(last, res.end());  // erase the duplicates

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        auto it = max_element(res.begin(), res.end());

        if (it != res.end()) {
            std::cout << "The maximum element is " << *it << std::endl;
        }




    }
}
