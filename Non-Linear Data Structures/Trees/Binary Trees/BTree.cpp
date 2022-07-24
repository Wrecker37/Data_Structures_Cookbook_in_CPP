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