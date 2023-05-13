#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sol(int n);

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

        vector<int> nums = { 1,2,3,5,5 };

        vector<int> ans;
        int n = nums.size();
        int val = 1;

        int left = 0;
        int right = nums.size() - 1;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            while (left < right) {
                if (nums[left] == val) {
                    flag = true;
                    break;
                }
                if (nums[right] == val) {
                    flag = true;
                    break;
                }
                left++;
                right--;
            }

            if (flag == false) {
                ans.push_back(val);
            }
            else {
                flag = false;
            }

            val++;
            left = 0;
            right = nums.size() - 1;


        }




        return 0;




    }
}


