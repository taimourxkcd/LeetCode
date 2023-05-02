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
        
        int x = -321;
        string s = "";
        int k = 0;
        bool flag;


        if (x < 0) {
             flag = true;
        }

        x = abs(x);
        while (x != 0) {
            int n = x % 10;
            x = x / 10;
            s += to_string(n);
            k++;
        }

        int ans = stoi(s);

        if (flag == true) {
            ans -= 2 * ans;
        }




        cout << ans;
    }
}
