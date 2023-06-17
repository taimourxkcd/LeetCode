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
        
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int k;
        cin >> k;

        vector<int> ans(n);
        
        int j = 1;
        int z = 0;

        for (int i = 0; i < n/2; i++,  z += 2, j +=2 ) {
            ans[z] = nums[i];
            ans[j] = nums[k + i];
          
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;






    }
}