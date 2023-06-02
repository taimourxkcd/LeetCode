#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
#include<unordered_map>
#include<stack>


using namespace std;


int transformCount(int num) {
    int count = 0;
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        }
        else {
            num = (3 * num) + 1;
        }
        count++;
    }
    return count;
}


int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt


    int lo = 7, hi = 11, k = 5;

  

        vector<pair<int, int>> ans; // pair of (power value, integer value)
        for (int i = lo; i <= hi; i++) {
            int c = transformCount(i);
            ans.push_back({ c, i });
        }

        sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first;
            });

        return ans[k - 1].second;

    return 0;
}
