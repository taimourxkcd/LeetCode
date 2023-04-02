#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> v(10000);

void genPrime()
{
    int flag = 1;
    v[0] = 1;
    int k = 1000;
    int j = 1;
    int num = 3;
    while (j != 1000)
    {
        

        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                // do nothing not a prime
                flag = 0;
            }
        }
        
        if (flag != 0)
        {
            v[j] = num;
            j++;
        }
        flag = 1;
        num++;
    }

    
}


int findPrime(int n)
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
            return 1;
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

bool isStrictlyIncreasing(const vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] <= v[i - 1]) {
            return false;
        }
    }
    return true;
}


int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int t;
    cin >> t;

    genPrime();

    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        int balance = 0;
        int ans = 0;
        int len = 0;

        for (int i = 0; i<s.length(); i++) {
          if (s[i] == '0') {
                balance++;
                len++;
            }
            else if (s[i] == '1') {
                balance--;
                len++;
            }
            if (balance == 0) {
                ans++;
                //len = 0;
            }
        }

        cout << ans << "and length = " << len << endl;


    }
}
