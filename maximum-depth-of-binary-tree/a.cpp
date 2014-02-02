#include <iostream>

using namespace std;

struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


    int maxDepth(TreeNode *root) {
    	if(root == NULL){
    		return 0;
    	}else{
            return 1+ max(maxDepth(root->left),maxDepth(root->right));
        }
    }


int main(){
	TreeNode* root = new TreeNode(10);
	TreeNode* root1 = new TreeNode(10);
	TreeNode* root2 = new TreeNode(10);
	TreeNode* root3 = new TreeNode(10);
	root->left = root1;
	root1->right = root2;

	root1->right = root3;


	cout<<maxDepth(root)<<endl;
	return 0;
}