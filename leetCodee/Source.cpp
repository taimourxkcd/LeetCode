#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>
#include <set>



using namespace std;



int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

   

    vector<int> vec = { 1, 2, 3, 4, 5, 6};

    bool res = binary_search(vec.begin(), vec.end(), 653);
    if (res) cout << "yes";





    return 0;
}
