#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    // inittalizing tree structure
    int data;
    node* left;
    node* right;
}

//c create a node
node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}

node* buildTree( node* root){

cout<<"Enter the data: "<<endl;
int data;
cin>>data;
root = new node(data);

if(data == -1){
    return NULL;
}

cout<<"Enter data for inserting in left "<< endl;
root->left = buildTree(root->left);
cout<<"Enter data for inserting in right "<< endl;
root->right = buildTree(root->right);
return root;
}

// create a level order traversal

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front(); 
        q.pop();

        if(temp = NULL){// purana level complete traverse ho chuka he 
        cout<<endl;
        if(!q.empty()){// queue still has same child node

           }
        }else{
            cout<< temp -> data <<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp ->right){
            q.push(temp ->right);
        }
        }

        
    }
}
// inorder traversal
void inorder(node* root){
    // base case 

    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}
// preorder travesal

void preorder(node* root){
    // base case 
    if(root == NULL){
        return ;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// post order traversal 
void postorder(node* root){
    // base case 

    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data <<" ";

}

// multioder traversal

node* buildFromLevelOrder(node* root){
    queue<node*>q;
    cout<<"Enter the data from the root"<< endl;
    int data;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for :" <<root->data <<endl;
        int leftData;
        cin>>leftData; 

        if(leftData != -1){
            temp ->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for :" <<root->data <<endl;
        int rightData;
        cin>>rightData; 

        if(rightData != -1){
            temp ->right = new node(rightData);
            q.push(temp->right);
        }
    }
}


int main(){

    return 0;
}