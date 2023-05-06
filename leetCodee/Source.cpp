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
        
        vector<int> player1 = { 2,3 };
        vector<int> player2 = { 4,1 };


        int p1sum = 0;
        int p2sum = 0;

        int n = player1.size();
        int n2 = player1.size();


        for (int i = 0; i < n - 1; i++) {
            p1sum += player1[i];
        }

        int prev = player2[0];
        int curr = player2[1];
        bool flag = false;

        for (int i = 0; i < n2; i++) {

            if (flag) {
                p2sum += player2[i];
            }
            else {
                p2sum += player2[i];
            }

            if (player2[i] == 10 && flag == false) {
                p2sum += player2[i];
                flag = true;
            }


        }

 
        if (p1sum > p2sum) {
            return 1;
        }
        else if (p1sum < p2sum) {
            return 2;
        }
        else {
            return 0;
        }





        
    }
}
