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
int main(){
    //Creating Root Node
    TreeNode<int> * root = new TreeNode<int>(1);
    //Creating Child
    TreeNode<int> * n1 = new TreeNode<int>(2);
    TreeNode<int> * n1 = new TreeNode<int>(1);
    //Linking Children
    root->children.push_back(n1);
    root->children.push_back(n2);
    return 0;
}
/*
Here n1 & n2 are leaf node (No Children)
n1 & n2 are siblings
root node has descendants of n1 & n2

*/
