#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include<queue>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* buildTree(Node *root) {
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1) {
        return NULL;
    }

        // creating the left subtree 
        root->left = buildTree(root->left);

        // creating the right substree
        root->right = buildTree(root->right);
        return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        cout << temp-> data << " ";
        q.pop();

        if (temp->left) {
            q.push(temp->left);
        }
        
        if (temp->right) {
            q.push(temp->right);
        }
    }
}


int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

        
    Node *root = NULL;

    root = buildTree(root);
    levelOrderTraversal(root);
    return 0;

}
