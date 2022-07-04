class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mid = 0;
        while(mid <= high){
            switch(nums[mid]){
                case 0:
                    swap(nums[mid++], nums[low++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
        // vector<int> arr;
        // for(int i = 0; i<nums.size(); i++) {
        //     if(nums[i] == 0){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // for(int i = 0; i<nums.size(); i++) {
        //     if(nums[i] == 1){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // for(int i = 0; i<nums.size(); i++) {
        //     if(nums[i] == 2){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // for(int i = 0; i<nums.size(); i++) {
        //     nums[i] = arr[i];
        // }
    }
};
