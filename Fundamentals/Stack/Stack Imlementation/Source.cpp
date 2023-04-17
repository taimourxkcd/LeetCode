#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include<queue>
using namespace std;


class Stack {
    public: 
        int* arr;
        int top; 
        int size;

        Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = -1;
        }


        void push(int data) {
            if (size - top > 1) {
                top++;
                arr[top] = data;
            }
            else {
                cout << "Stackoverflow" << endl;
            }
        }

        void pop() {
            if (top >= 0) {
                top--;
            }
            else {
                cout << "Stack underflow" << endl;
            }
        }

        int peek() {
            return arr[top];
        }

        bool isEmpty() {    
            if (top == -1) {
                return true;
            }
            else {
                return false;
            }
        }

};

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    Stack s(2);
    s.push(2);
    s.push(3);
    s.push(6);

}