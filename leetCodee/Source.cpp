#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int low, int mid, int high) {
    int l1, l2, i;

    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        if (a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }

    while (l1 <= mid)
        b[i++] = a[l1++];

    while (l2 <= high)
        b[i++] = a[l2++];

    for (i = low; i <= high; i++)
        a[i] = b[i];
}

void sort(int low, int high) {
    int mid;

    if (low < high) {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid + 1, high);
        merging(low, mid, high);
    }
    else {
        return;
    }
}

int main() {
    int i;

    printf("List before sorting\n");

    for (i = 0; i <= max; i++)
        printf("%d ", a[i]);

    sort(0, max);

    printf("\nList after sorting\n");

    for (i = 0; i <= max; i++)
        printf("%d ", a[i]);
}



//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//#include <string>
//#include<queue>
//using namespace std;
//
//
//int merging(int left, int mid, int right) {
//
//}
//
//int mergesort(int left, int right) {
//    int mid; 
//
//    if (left < right) {
//        mid = (left + right) / 2;
//        mergesort(left, mid - 1);
//        mergesort(mid, right);
//        merging(left, mid, right);
//    }
//    else {
//        return;
//    }
//
//    
//}
//
//int main()
//{
//
//    FILE* inputFile = nullptr;
//    FILE* outputFile = nullptr;
//    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
//    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt
//
//    int t;
//    cin >> t;
//    while (t--) {
//
//        int n;
//        cin >> n;
//        vector<int> nums(n);
//        
//        //taking input the vector
//        for (int i = 0; i < n; i++) {
//            cin >> nums[i];
//        }
//
//    
//        for (int i = 0; i < n; i++) {
//            nums[i] = nums[i] * nums[i];
//        }
//
//        //sorting
//        int right = 0;
//        int left = nums.size() - 1;
//        
//        mergesort(left, right);
//        
//
//
//
//        // printing the output vector 
//        for (int i = 0; i < n; i++) {
//            cout << nums[i] << " ";
//        }
//
//
//
//
//
//
//
//    }
//}