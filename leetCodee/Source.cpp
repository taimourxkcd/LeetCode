#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	FILE* inputFile = nullptr;
	FILE* outputFile = nullptr;
	freopen_s(&inputFile, "input.txt", "r", stdin);	   // Redirect standard input to input.txt
	freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		int count = 0;

		cin >> s;

		for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
		{

			if (s[i] == s[j])
			{
				count++;
			}
		}

		if (count == s.size() / 2)
		{
			cout << "it is a palindrome" << endl;
		}
		else
		{
			cout << "not a palindrome" << endl;
		}
	}

	return 0;
}
