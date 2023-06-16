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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int d)
{
    Node *node = new Node(d);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->next = NULL;
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

void insertAfterHead(Node *&head, int d)
{
    Node *node = new Node(d);
    Node *next = head->next;

    head->next = node;
    node->next = next;
}

void insertAtPosition(Node *&head, int position, int d)
{

    // edge case, insert at start position
    if (position == 1)
    {
        insertAtHead(head, d);

        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(d);

    // edge case, insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteAtPosition(Node *&head, int position)
{

    // edge case, if you need to delete head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    Node *head = new Node(10);
    insertAtHead(head, 2);
    insertAtHead(head, 21);
    insertAfterHead(head, 333);
    insertAtHead(head, 31);
    insertAtTail(head, 99);
    insertAtPosition(head, 7, 0);
    print(head);
    deleteAtPosition(head, 7);

    cout << endl;

    print(head);

    return 0;
}
