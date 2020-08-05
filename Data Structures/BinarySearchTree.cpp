/*Implementation of Binary Search Tree
Name: Vinayak L Kokane*/

#include<bits/stdc++.h>
using namespace std;

struct bstnode
{
    int data;
    struct bstnode *left, *right;
};

struct bstnode *newNode(int key)
{
    struct bstnode *temp =  new struct bstnode();
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct bstnode *root)
{
    if (root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void inorder2(struct bstnode *root){            //iterative inorder
    stack <bstnode* > s;
    bstnode* current=root;
    while(current!=NULL || s.empty()==false){
        while(current!=NULL){
            s.push(current);
            current=current->left;
        }

        current=s.top();
        s.pop();
        cout<<current->data<<" ";
        current=current->right;

    }
}
void preorder(struct bstnode* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void preorder2(struct bstnode* root){
    stack <bstnode* > s;
    bstnode* curr=root;

    while(curr!=NULL || !s.empty()){
        cout<<curr->data<<" ";
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
}

void postorder(struct bstnode* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void postorder2(struct bstnode* root){
    stack <bstnode* > s1,s2;
    bstnode* curr;
    s1.push(root);
    while(!s1.empty()){
        curr=s1.top();
        s1.pop();
        s2.push(curr);

        if(curr->left)
            s1.push(curr->left);
        if(curr->right)
            s1.push(curr->right);
    }
    while(!s2.empty()){
        curr=s2.top();
        s2.pop();
        cout<<curr->data<<" ";
    }
}

struct bstnode* insert(struct bstnode* node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->data)
        node->left  = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

struct bstnode * minValueNode(struct bstnode* node)
{
    struct bstnode* current = node;

    while (current && current->left != NULL)
        current = current->left;
    cout<<current->data;
    return current;
}

struct bstnode* maxValue(bstnode* node){
    bstnode* current=node;

    while(current && current->right!=NULL){
        current=current->right;
    }
    cout<<current->data;
    return current;
}

struct bstnode* MirrorImage(bstnode* node){
    if(node==NULL)
        return node=NULL;
    else{
        bstnode* temp;
        MirrorImage(node->left);
        MirrorImage(node->right);
        temp=node->left;
        node->left=node->right;
        node->right=temp;
        return temp;
    }
}
struct bstnode* levelorder(bstnode* node){
    if (node==NULL)
        return node=NULL;

    queue <bstnode*> q;
    q.push(node);
    while(!q.empty()){
        bstnode* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);

    }
    return NULL;

}
struct bstnode* deleteNode(struct bstnode* root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else{
            if (root->left == NULL)
                    {
            struct bstnode *temp = root->right;
            delete root;
            return temp;
                    }
            else if (root->right == NULL)
                    {
            struct bstnode *temp = root->left;
            delete root;
            return temp;
        }

            struct bstnode* temp = minValueNode(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }
    return root;
}

int main()
{
    struct bstnode *root = NULL;
    int n;
    cout<<"Enter no. of nodes for tree: ";  cin>>n;
    cout<<"\nEnter elements: ";
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        root=insert(root,x);
    }
    cout<<"\nRecursive in-order traversal: ";
    inorder(root);
    cout<<"\nIterative in-order traversal: ";
    inorder2(root);

    cout<<"\nRecursive Pre-order traversal: ";
    preorder(root);

    cout<<"\nIterative Pre-order traversal: ";
    preorder(root);

    cout<<"\nRecursive Post-order traversal: ";
    postorder(root);

    cout<<"\nIterative Post-order traversal: ";
    postorder2(root);

    cout<<"\nMin-value of tree: ";
    minValueNode(root);

    cout<<"\nMax-value of tree: ";
    maxValue(root);

    MirrorImage(root);
    cout<<"\nMirror-Image of tree: ";
    inorder(root);

    cout<<"\nLevel-Order Traversal of Tree: ";
    levelorder(root);
    return 0;
}
