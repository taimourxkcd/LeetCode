#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int* nums = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int target;
        cin >> target;

        int mid = 0;
        int left = 0;
        int flag = 0;
        int right = n - 1;

        for (int i = 0; i < n; i++)
        {
            mid = (left + right) / 2;

            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid;
            }
            else if (nums[mid] == target)
            {
                // cout << "ELEMENT FOUND AT" << mid<< endl;
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Found at index " << mid << endl;
        }
        else
        {
            cout << "Not found" << endl;

        }
    }
}
