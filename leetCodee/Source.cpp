#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
#include<unordered_map>
#include<stack>


using namespace std;



int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    unordered_map<int, string> mpp; 
    mpp[1] = "I";
    mpp[4] = "IV";
    mpp[5] = "V";
    mpp[9] = "IX";
    mpp[10] = "X";
    mpp[40] = "XL";
    mpp[50] = "L";
    mpp[90] = "XC";
    mpp[100] = "C";
    mpp[400] = "CD";
    mpp[500] = "D";
    mpp[900] = "CM";
    mpp[1000] = "M";

    string ans = "";

    int num = 51531516;

    if (num >= 1000) {
        int cnt = num / 1000;
        while (cnt--) {
            ans += mpp[1000];
        }
        num = num % 1000;
    }

    if (num >= 900) {
        ans += mpp[900];
        num = num % 900;
    }

    if (num >= 500) {
        ans += mpp[500];
        num = num % 500;
    }

    if (num >= 400) {
        ans += mpp[400];
        num = num % 400;
    }

    if (num >= 100) {
        int cnt = num / 100;
        while (cnt--) {
            ans += mpp[100];
        }
        num = num % 100;
    }

    if (num >= 90) {
        ans += mpp[90];
        num = num % 90;
    }

    if (num >= 50) {
        ans += mpp[50];
        num = num % 50;
    }

    if (num >= 40) {
        ans += mpp[40];
        num = num % 40;
    }

    if (num >= 10) {
        int cnt = num / 10;
        while (cnt--) {
            ans += mpp[10];
        }
        num = num % 10;
    }

    if (num >= 9) {
        ans += mpp[9];
        num = num % 9;
    }

    if (num >= 5) {
        ans += mpp[5];
        num = num % 5;
    }

    if (num >= 4) {
        ans += mpp[4];
        num = num % 4;
    }

    if (num >= 1) {
        int cnt = num;
        while (cnt--) {
            ans += mpp[1];
        }
    }

    cout << ans;

    return 0;
}
