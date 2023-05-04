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
        
        string words[] = { "pay","attention","practice","attend" };
        string pref = "at";
        

        int n = sizeof(words);
        int count = 0;
        for (int i = 0; i < n; i++) {
            string temp = words[i];
            string str = "";
            for (int j = 0; j < temp.size(); j++) {
                str += temp[i];
                if (str == pref) {
                    count++;
                }
            }
        }
        cout <<  count;




        
    }
}
