#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int num = 1234;

    stack<int> stk;
    int n = num;

    while (n != 0)
    {
        stk.push(n % 10);
        n = n / 10;
    }

    int i = 1;
    int rev = 0;
    while (!stk.empty())
    {
        rev = rev + (stk.top() * i);
        stk.pop();
        i *= 10;
    }

    cout << rev;

    return 0;
}
