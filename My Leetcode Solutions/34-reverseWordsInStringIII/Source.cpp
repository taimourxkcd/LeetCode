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
        
        string s;
        getline(cin, s);

        int size = s.size();
        string ans = "";
        int count = 0;
        int k = 0;
        for (int i = 0; i < size; i++) {
            count++;
            if (s[i] == ' ' || s[i] == '\0') {
                int j = i-1;
                while (count-- && j >= 0) {
                    if (s[j] == ' ') {
                        //do nothing
                    }
                    else {
                        ans += s[j];
                    }
                    j--;
                    
                }

                  ans += ' ';
                
                count = 0;
            }
        }
        // handle the last word
        int j = size - 1;
        while (j >= 0 && s[j] != ' ') {
            ans += s[j];
            j--;
        }

        cout << ans << endl;
    }
}
