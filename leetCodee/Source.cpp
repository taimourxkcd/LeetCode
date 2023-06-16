#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;


    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete (next);
            this->next = NULL;
            this->prev = NULL;
        }
        cout << endl
            << "memory free with data " << value << endl;
    }

  
};

void print(Node*& head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node*& head, int d) {

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

void insertAtTail(Node*& head, int d) {

    Node* temp = new Node(d);
    Node* curr = head;
    Node* prev = NULL;

    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;
    temp->next = NULL;


}

void insertAtPosition(Node*& head, int position, int d) {
    // edge case, insert at start position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while (cnt < position )
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);

    // edge case, insert at last position
    if (curr->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    prev->next = nodeToInsert;
    nodeToInsert->prev = prev;
    nodeToInsert->next = curr->next;
    Node* nxt = curr->next;
    nxt->prev = nodeToInsert;
}

void deleteAtPosition(Node*& head, int position)
{

    // edge case, if you need to delete head
    if (position == 1)
    {
        Node* temp = head;
        Node* nxt = head->next;
        head = head->next;
        head->prev = NULL;
        
        temp->next = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    Node* nxt = curr->next;
    nxt->prev = prev;
    curr->next = NULL;
    delete curr;
}

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtPosition(head, 3, 222);
    insertAtPosition(head, 1, 0);


    insertAtTail(head, 0);
    insertAtTail(head, 4);

    insertAtTail(head, 10);

    insertAtPosition(head, 8, 99);
    print(head);

    deleteAtPosition(head, 3);





    print(head);

    return 0;
}
