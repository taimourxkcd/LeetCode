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
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete (next);
            next = NULL;
        }
        cout << endl
             << "memory free with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found and curr is representing the element
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int d)
{

    // empty list
    if (tail == NULL)
    {
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != d)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // 1 Node Linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;

        // edge case
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if (tail == NULL)
        return;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while (tail != temp);
}

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    Node *tail = NULL;
    insertNode(tail, 3, 5);
    /*  insertNode(tail, 5, 3);
      insertNode(tail, 5, 7);
      insertNode(tail, 7, 9);
      insertNode(tail, 3, 2);*/

    print(tail);
    cout << endl;
    deleteNode(tail, 5);
    print(tail);

    return 0;
}
