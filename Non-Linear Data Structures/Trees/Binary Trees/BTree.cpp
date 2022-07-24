#include <iostream>

class BNode{
public:
    int data;
    BNode *left,*right;

    BNode(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

};

class BTree{
public:
    BNode *root;
    
    BTree(int data){
        BNode *newNode = new BNode(data);
        this->root = newNode;
    }

    void preOrder(BNode *root){
        if(root != nullptr){

            std::cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    void inOrder(BNode *root){
        inOrder(root->left);
        std::cout << root->data <<  " ";
        inOrder(root->right);
    }

    void postOrder(BNode *root){
        postOrder(root->left);
        postOrder(root->right);
        std::cout << root->data << " ";
    }


};

int main(){

    BTree tree(1);
    tree.root->left = new BNode(2);
    tree.root->right = new BNode(3);

    tree.root->left->left = new BNode(4);
    tree.root->left->right = new BNode(5);
    tree.root->right->left = new BNode(6);
    tree.root->right->right = new BNode(7);

    return 0;
}