#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete (next);
            this->next = NULL;
        }
        cout << endl
            << "memory free with data " << value << endl;
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

Node* reverseList(Node* &head)
{

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;

        curr = next;
    }

    head = prev;
    return head;
}

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    vector<vector<int>> times = { {1,1,1}  ,{2,1,3} ,{3,4,1} };

    unordered_map<int, vector<pair<int, int>>> map;

    for (vector<int> data : times) {
        map[data[0]].push_back({ data[1], data[2] });
    }




    return 0;
}
