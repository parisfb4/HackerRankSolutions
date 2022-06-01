
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL)
            return -1;
        int leftH = height(root->left);
        int rightH = height(root->right);
        return leftH > rightH ? leftH + 1 : rightH + 1;
    }

