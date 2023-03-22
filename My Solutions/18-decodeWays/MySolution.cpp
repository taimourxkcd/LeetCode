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

		unordered_map<int, char> alphabets;

		int i = 1;
		for (char c = 'A'; c < 'Z'; c++)
		{

			alphabets.insert(make_pair(i, c));
			i++;
		}

		int count = 0;

		if (s.size() == 2)
		{
			int temp = stoi(s);

			int res = temp % 100;
			if (res > 10 && res <= 26 && s[0] != '0')
			{
				count += 2;
			}
			else if (s[0] == '0')
			{
			}
			else
			{
				count += 1;
			}
		}
		else if (s.size() == 1)
		{
			if (s[0] == '0')
			{
			}
			else
			{
				count += 1;
			}
		}
		else
		{
			count += 3;
		}

		cout << count << endl;
	}
}
