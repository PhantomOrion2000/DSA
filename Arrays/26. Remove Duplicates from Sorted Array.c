class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        // int n = arr.size();
        // int i = 0;
        // int j = 1;
        // while(j<n) {
        //     if(arr[i] == arr[j]){
        //         j++;
        //     }else{
        //         i++;
        //         arr[i] = arr[j];
        //         j++;
        //     }
        // }
        // return i + 1;
        
        int count = 0;
        for(int i = 1; i<arr.size(); i++) {
            if(arr[i] == arr[i-1]) count++;
            else arr[i-count] = arr[i];
        }
        return arr.size() - count;
    }
};
