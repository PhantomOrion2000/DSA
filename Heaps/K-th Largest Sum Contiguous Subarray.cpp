  int kthLargest(vector<int> &Arr,int n,int k){
      priority_queue<int, vector<int>, greater<int>> minheap;

      for(int i = 0; i < n ; i++) {
          int sum = 0;
          for(int j = i; j < n; j++) {
              sum+=Arr[j];

              if(minheap.size() < k){
                  minheap.push(sum);
              }else if(sum > minheap.top()){
                  minheap.pop();
                  minheap.push(sum);
              }
          }
      }
      return minheap.top();
  }
