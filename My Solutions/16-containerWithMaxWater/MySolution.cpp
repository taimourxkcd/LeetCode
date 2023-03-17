#include <iostream>
#include <algorithm>
#include <vector>
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
		vector<int> height(n);

		for (int i = 0; i < height.size(); i++)
		{
			cin >> height[i];
		}

		vector<int> result(height.size() * height.size());
		int k = 0;

		for (int i = 0; i < height.size(); i++)
		{
			for (int j = 0; j < height.size(); j++) {
				result[k] = (j - i) * min(height[i], height[j]);
				k++;
			}
		}


		int max = result[0];
		for (int j = 0; j < result.size(); j++) {
			if (max < result[j]) {
				max = result[j];
			}
		}

		cout << max << endl;

	}
}