#include <iostream>
using namespace std;
class BSTnode{
public:
  int data;
  BSTnode *left,*right;
  BSTnode(){
    left=NULL;
    right=NULL;
  }
  BSTnode(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
class BSTtree{
public:
  BSTnode *root=NULL;
  void insert(int d) {
    root=insert(root,d);
  }
  BSTnode* insert(BSTnode* root,int d){
    if(root==NULL){
      root=new BSTnode(d);

    }
    else if((root->data) > d){
      root->left=insert(root->left,d);
    }
    else if((root->data)<d){
      root->right=insert(root->right,d);
    }
  }
  void inorder() {
    /* code */
    if (root!=NULL) {

      inorder(root);
    }
  }
  void inorder(BSTnode* root){
    if(root!=NULL){
      inorder(root->left);
      cout<<root->data;
      inorder(root->right);
    }
  }
  void countleaves(BSTnode* root){
    //practice!!
  }
};
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  BSTtree b;
  while (n--) {
    /* code */
    int x;
    cin>>x;
    b.insert(x);
  }
  b.inorder();
  b.countleaves(b.root);
  return 0;
}
