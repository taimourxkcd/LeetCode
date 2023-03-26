#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int isPrime(int n)
{

    // initially the number is prime
    int flag = 1;
    int found = 0;
    int temp = n - 1;

    // do this until u get the lowest prime no
    while (found == 0)
    {
        if (temp <= 1)
        {
            return -1;
        }
        else
        {
            for (int i = 1; i <= temp / 2; i++)
            {
                if (temp % (i + 1) == 0)
                {
                    flag = 0;
                }
            }
        }

        if (flag == 1)
        {
            found = 1;
        }
        else
        {
            temp = temp - 1;
            flag = 1;
        }
    }

    return temp;
}

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
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }

        int temp;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            temp = nums[i];

            int lower_prime = isPrime(temp);
            nums[i] = nums[i] - lower_prime;


            if (nums[i] == nums[i+1]) {
                break;
            }
            

            if (is_sorted(nums.begin(), nums.end()))
            {
                cout << "true " << endl;
                break;
            }
        }

        cout << "false " << endl;
    }
}
