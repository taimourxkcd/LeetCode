#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

	FILE *inputFile = nullptr;
	FILE *outputFile = nullptr;
	freopen_s(&inputFile, "input.txt", "r", stdin);	   // Redirect standard input to input.txt
	freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		if (s.length() < 1)
			return 0;

		if (s[0] == '0')
		{
			// return 0;
			cout << "0" << endl;
			continue;
		}
		if (s.length() == 1)
		{
			// return 1;
			cout << "1" << endl;
			continue;
		}

		int val1 = 1;
		int val2 = 1;

		for (int i = 1; i < s.length(); i++)
		{
			int d1 = s[i] - '0';
			int d2 = (s[i - 1] - '0') * 10 + d1;

			int val = 0;

			if (d1 >= 1)
			{
				val += val2;
			}

			if (d2 >= 10 && d2 <= 26)
			{
				val += val1;
			}

			val1 = val2;
			val2 = val;
		}

		cout << val2 << endl;
	}
}
