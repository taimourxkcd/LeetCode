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

    int n = 16;
    int p = 0;

    int num = 1;
    while (num <= n) {
        num = num * 2;
        if (num == n) return true;

        p = p + 1;
    }

    cout<< false;

    return 0;
}
