void heapify(vector<int> &ans, int n, int &i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < n && ans[largest] < ans[left]){
        largest = left;
    }
    if(right < n && ans[largest] < ans[right]) {
        largest = right;
    }
    
    if(largest != i){
        swap(ans[largest] , ans[i]);
        heapify(ans, n, largest);
    }
}
vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
    // Write your code here
    vector<int> ans;
    //Step 1: merger the vectors;
    for(auto i: arr1) ans.push_back(i);
    for(auto i: arr2) ans.push_back(i);
    
    int size = ans.size();
    
    //heapify
    for(int i = size/2-1; i>=0; i--){
        heapify(ans, size, i);
    }
    
    return ans;
}
