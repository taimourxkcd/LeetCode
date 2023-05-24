#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
#include<unordered_map>

using namespace std;


int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    string s = "III";
    unordered_map<char, int> mpp;
    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;


    int n = s.size();
    int sum = 0;

for (int i = 0; i < s.size(); i++){
    if (s[i + 1] >= s[i]) {
        sum = mpp[s[i + 1]] + mpp[s[i]];
    }
    else {
        sum = mpp[s[i + 1]] - mpp[s[i]];
    }

}
    cout << sum;

    return 0;
}
