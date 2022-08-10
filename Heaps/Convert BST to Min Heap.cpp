void inorderInsert(BinaryTreeNode* root, vector<int> &arr){
    if(root == NULL) return;
    
    inorderInsert(root->left, arr);
    arr.push_back(root->data);
    inorderInsert(root->right, arr);
}

void bstToHeap(BinaryTreeNode* root, vector<int> &arr, int &index) {
    if(root == NULL) return;
    
    root->data = arr[index++];
    
    bstToHeap(root->left, arr, index);
    bstToHeap(root->right,arr, index);
}

void preorder(BinaryTreeNode* root) {
    if(root == NULL) return;
    
    cout << root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
    if(root == NULL)return NULL;
    vector<int> arr;
    int index = 0;
    
    inorderInsert(root, arr);
    
    bstToHeap(root, arr, index);
    
    return root;
}
