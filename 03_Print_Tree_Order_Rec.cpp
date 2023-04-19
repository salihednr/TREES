/*
Simple Way To Print Tree
*/
#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;
        TreeNode(T data){
            this->data=data;
        }
};
//Print Recursively
void printRec(TreeNode<int> *root){
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++)
        cout<<root->children[i]->data<<" ";
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printRec(root->children[i]);
    }
}
int main(){
    //Creating Root Node
    TreeNode<int> * root = new TreeNode<int>(1);
    //Creating Child
    TreeNode<int> * n1 = new TreeNode<int>(2);
    TreeNode<int> * n2 = new TreeNode<int>(3);
    TreeNode<int> * n3 = new TreeNode<int>(4);
    TreeNode<int> * n4 = new TreeNode<int>(6);
    //Linking Children
    root->children.push_back(n1);
    root->children.push_back(n2);
    root->children.push_back(n3);
    n3->children.push_back(n4);
    //Printing
    printRec(root);
    return 0;
}
/*
Here n1 & n2 are leaf node (No Children)
n1 & n2 are siblings
root node has descendants of n1 & n2

*/
