/*
Input Tree Using Recursively Not Level Wise
So Input Is Hard But Coding Is Simple
This Is Bad Way To Make Tree User Need To Know Recursion To Make Tree
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
//Take Input Recursively
TreeNode<int> *takeinput(){
    //Root Data
    int rootData;
    cout<<"Enter Data: ";
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    //Number Of Children
    cout<<"Enter The Number Of Children Of "<<rootData<<" : ";
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        TreeNode<int>*child=takeinput();
        root->children.push_back(child);
    }
    return root;
}
int main(){
    TreeNode<int> * root = takeinput();
    //Printing
    printRec(root);
    return 0;
}
/*
Here n1 & n2 are leaf node (No Children)
n1 & n2 are siblings
root node has descendants of n1 & n2

*/
