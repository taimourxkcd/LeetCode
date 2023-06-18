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

   

    set<int> sett = { 1, 2, 3, 4, 5, 6};
    int a = 5;
    for (auto n : sett) {
       
    }
    if (sett.count(5) > 0) cout << "present in the set";



    return 0;
}
