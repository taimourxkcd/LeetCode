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
    cin.ignore(); // ignore the newline character left in the input stream

    while (t--) {
        
        string s = "IDID";
        
        int n = s.size();

        vector<int> ans;

        int low = 0;
        int high = n;

        for (int i = 0; i < n+1; i++) {
            if (s[i] == 'I') {
                ans.push_back(low);
                low++;
            }
            else {
                ans.push_back(high);
                high--;
            }
        }




        
    }
}
