class Solution {
  public:
    int countNodes(struct Node* root){
        if(root == NULL){
            return 0;
        }
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    bool isCBT(struct Node* root, int index, int totalCount){
        if(root == NULL){
            return true;
        }
        if(index > totalCount){
            return false;
        }else{
            bool left = isCBT(root->left, 2*index + 1, totalCount);
            bool right = isCBT(root->right, 2*index + 2, totalCount);
            return (left && right);
        }
    }
    bool isMaxOrder(struct Node* root) {
        if(root->left == NULL && root->right == NULL) return true;
        
        if(root->right == NULL)
        {
            return (root->data > root->left->data);
        }
        else
        {
            bool left = isMaxOrder(root->left);
            bool right = isMaxOrder(root->right);
            return (left && right 
                    && 
                    (root->data > root->left->data && root->data > root->right->data));
        }
    }
    bool isHeap(struct Node* root) {
        // code here
        int index = 0;
      //step 1: Calculate the number of nodes of the tree
        int totalCount = countNodes(root);
      // Step 2: Check if the tree is a Complete Binary Tree And if the tree stisfy the max order
        if(isCBT(root, index, totalCount) && isMaxOrder(root)){
            return true;
        }else{
            return false;
        }
    }
};
