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
    while (t--) {
        int numOnes, numZeros, numNegOnes, k;
        cin>> numOnes >> numZeros >> numNegOnes >> k;
        int sum = 0;

        while (k > 0) {
            if (numOnes > 0) {
                sum += 1;
                numOnes--;
            }
            else if (numOnes == 0 && numZeros > 0) {
                numZeros--;
            }
            else if(numOnes == 0 && numZeros == 0 && numNegOnes > 0){
                sum -= 1;
                numNegOnes--;
            }
            k--;
        }

        cout << sum << endl;
    }
}
