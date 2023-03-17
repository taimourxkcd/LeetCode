#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> height(n);

        for (int i = 0; i < height.size(); i++)
        {
            cin >> height[i];
        }

        int max_area = 0;
        int left = 0, right = height.size() - 1;

        while (left < right)
        {
            int area = (right - left) * min(height[left], height[right]);
            max_area = max(max_area, area);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        cout << max_area;
    }
}