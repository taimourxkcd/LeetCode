#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{

    // calculatiing the mid and the length of arr 1 and 2 
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating two new vectors based on the length we calculated
    vector<int> first(len1);
    vector<int> second(len2);


    // copying the values from the original array intot the newly created array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merging and sorting the two newly created arrays
    int index1 = 0;
    int index2 = 0;
    k = s;

    // going as long as both remain true. inevitably, at the end one of the indexes would reach the end first. 
    // so we handle the case later

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    // here we check that for the index which was not able to complete in the last while loop to
    //  copy the remaining elements from the original array to the new array
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    vector<int> nums = { 1,3,5,6 };

    
       
            int l = 0, r = nums.size() - 1;
            int target = 7;

            int i = 0;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (nums[mid] == target) return mid;
                i++;

                if (nums[mid] < target) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                    i = mid;
                }
            }

            cout<< i;


    

}
