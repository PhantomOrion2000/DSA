//kth smallest
// arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        
        for(int i = l; i<k; i++) {
            pq.push(arr[i]);
        }
        
        for(int i = k; i<=r; i++) {
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        return pq.top();
    }

//kth largest
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    for(int i = 0 ;i<k; i++) {
        minheap.push(a[i]);
    }
    for(int i = k; i<n; i++){
        if(a[i] >= minheap.top()){
            minheap.pop();
            minheap.push(a[i]);
        }
    }
    return minheap.top();
}
