#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        ;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAfterHead(Node*& head, int d) {
    Node* node = new Node(d);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;

    }
    temp->next = node;

}

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int arr[] = { 2,3,4,7,11 };
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 1;
    bool flag = false;
    int z = 0;
    int last = arr[n - 1];
    vector<int> ans;
    for (int i = 0; i < last + k ; i++) {
        if (num != arr[z]) {
            ans.push_back(num);
            num++;
        }
        else {
            num++;
            z++;
        }
    }

    cout<< ans[k-1];
}
