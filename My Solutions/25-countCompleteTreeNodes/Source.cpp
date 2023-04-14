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


// NLR
void countNode(Node* root, int& sum) {
    if (root == NULL)
        return;


    sum += 1;
    countNode(root->left, sum);
    countNode(root->right, sum);
}

int main()
{

    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    int sum = 0;
    Node *root = NULL;


    root = buildTree(root);

    countNode(root, sum);
    cout << sum << endl;

    return 0;

}
