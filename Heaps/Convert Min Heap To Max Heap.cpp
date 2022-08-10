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
vector<int>MinToMaxHeap(int n, vector<int>&arr)
{
	// Write your code here.
    for(int i = n/2-1; i>=0;i--){
        heapify(arr, n, i);
    }
    return arr;
}
