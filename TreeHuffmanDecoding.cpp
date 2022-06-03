

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/


void decode_huff(node * root, string s) {
    node* aux = root;
    for (int i = 0; i <= s.size(); i++) {
        if (aux->data == '\0') {
            if (s[i] == '0') aux = aux->left;
            else aux = aux->right;
        }else {
            cout << aux->data;
            aux = root;
            i--;
        }
    }

    
}

