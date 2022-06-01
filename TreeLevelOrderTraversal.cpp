#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node*> myQueue;
        myQueue.push(root);
        Node* aux;
        while (!myQueue.empty()) {
            aux = myQueue.front();
            myQueue.pop();
            cout << aux->data << " ";
            if (aux->left != nullptr) {
                myQueue.push(aux->left);
            }
            if (aux->right != nullptr) {
                myQueue.push(aux->right);
            }
        }
    }

}; //End of Solution
