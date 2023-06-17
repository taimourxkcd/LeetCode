#include <iostream>
#include <algorithm>
#include <vector>
#include<set>
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
        vector<string> emails(n);
   
        for (int i = 0; i < n; i++) {
            cin >> emails[i];
        }


     
        int n2 = emails.size();

        set<string> uniqeEmail;

        int count = 0;
        bool flag = true;

       

        for (int i = 0; i < n2; i++) {
            string str = "";
            string domain = "";
            string temp = emails[i];
            int j = 0;
            while (temp[j] != '@') {
                str += temp[j];
                j++;
            }
            j++;
            while (temp[j] != '\0') {
                domain += temp[j];
                j++;
            }

            

            int k = 0;
            string local = "";
            while (str[k] != '\0') {
                if (str[k] == '+') {
                    break;
                }
                if (str[k] == '.') {
                    local += str[k + 1];
                    k += 2;
                }
                else {
                    local += str[k];
                    k++;

                }

            }

            string ans = local + "@" + domain;
            uniqeEmail.insert(ans);


        }

        cout << uniqeEmail.size();

       
    }
}