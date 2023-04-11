#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int findFibonachi(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return findFibonachi(n - 1) + findFibonachi(n - 2);
    }

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
        int ans = findFibonachi(5);
        cout << ans << endl;
        


    }
}
