#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        ;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node*& head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAfterHead(Node*& head, int d)
{
    Node* node = new Node(d);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    vector<int> nums = { 0,1,0,3,12 };

    int n = nums.size();
    int l = 0;

    for (int i = 0; i < n; i++) {

        if (nums[l] == 0 && nums[i] != 0) {
            swap(nums[l], nums[i]);

        }

        if (nums[l] != 0) {
            l += 1;
        }
    }

    return 0;
}
