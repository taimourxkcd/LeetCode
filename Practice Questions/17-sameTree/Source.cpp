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

Node* buildTree(Node* root) {
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
        cout << temp->data << " ";
        q.pop();

        if (temp->left) {
            q.push(temp->left);
        }

        if (temp->right) {
            q.push(temp->right);
        }
    }
}

// LNR
void inOrderTraversal(Node* root) {


    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);

}

// NLR
void preTraversal(Node* root) {


    if (root == NULL)
        return;

    cout << root->data << " ";
    preTraversal(root->left);
    preTraversal(root->right);

}

// LRN
void postTraversal(Node* root) {


    if (root == NULL)
        return;

    postTraversal(root->left);
    postTraversal(root->right);
    cout << root->data << " ";

}

pair<bool, int> isSameTreeFast(Node* root) {
    //base case 
    if (!root) {
        return make_pair(true, 0);
    }

    //leaf node 
    if (root->left == NULL && root->right == NULL) {
        return make_pair(true, root->data);
    }

    pair<bool, int> leftAns = isSameTreeFast(root->left);
    pair<bool, int> rightAns = isSameTreeFast(root->right);

    int isLeftSumTree = leftAns.first;
    int isRightSumTree = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;


    bool cond = root->data == leftSum + rightSum;

    pair<bool, int> ans;

    if (isLeftSumTree && isRightSumTree && cond) {
        ans.first = true;
        ans.second = root->data + leftSum + rightSum;
    }
    else {
        ans.first = false;
    }

    return ans;

}

int main()
{

    FILE* inputFile = nullptr;
    FILE* outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt


    Node* root = NULL;

    root = buildTree(root);
    levelOrderTraversal(root);
    cout << endl;
    //inOrderTraversal(root);
   /* cout << endl;
    preTraversal(root);
    cout << endl; */

    //postTraversal(root);
    //int ans = height(root);

    bool ans = isSameTreeFast(root).first;
    cout << ans;
    return 0;

}
