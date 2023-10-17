#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data=d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data == -1)
        return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void buildFromLevelOrder(node* &root)
{
    queue<node*>q;
    cout << "Enter the data for root"<<endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1)
        {
            temp->left =new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the left node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1)
        {
            temp->right =new node(rightData);
            q.push(temp->right);
        }

    }

}
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

void inOrderTraversal(node* root)
{
    if(root==NULL)
        return;

    inOrderTraversal(root->left);
    cout << (root->data) << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node* root)
{
    if(root==NULL)
        return;

    cout << (root->data) << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root)
{
    if(root==NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << (root->data) << " ";
}

int main(){

    node* root=NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    /*
    // creating a tree
    root=buildTree(root);
    cout<<endl;
    cout<<"Level order traversal output: "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder traversal output: "<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Preorder traversal output: "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Postorder traversal output: "<<endl;
    postOrderTraversal(root);
    */

    return 0;
}