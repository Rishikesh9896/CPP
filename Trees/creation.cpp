#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root){
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;              // check before allocation
    }

    root = new node(data);

    cout << "Enter the data for inserting in the left " << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in the right " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    if(root == NULL) return;      // guard for empty tree

    queue<node*> q;
    q.push(root);
    q.push(NULL);                  // level separator

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // ek level khatam
            cout << endl;
            if(!q.empty()){
                q.push(NULL);     // next level ke liye separator
            }
        } else {
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void inorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}  

void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;

    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

}


int main(){
    node* root = NULL;
     root = buildTree(root);
    //buildFromLevelOrder(root);
    levelOrderTraversal(root);

    // // Sample input sequence (give these when prompted):
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // // This builds the tree and prints level-wise.

    // levelOrderTraversal(root);
    // cout << endl;

     cout << "Inorder Traversal: ";
     inorder(root);

    // cout << endl;
    // cout << "Preorder Traversal: ";
    // preorder(root);

    // cout << endl;
    // cout << "Postorder Traversal: ";
    // postorder(root);

    // cout << endl;


    return 0;


}
