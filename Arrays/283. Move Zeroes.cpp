class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //o(n^2)
        
        // for(int i = 0 ; i<nums.size(); i++) {
        //     if(nums[i] == 0){
        //         for(int j = i+1; j<nums.size(); j++) {
        //             nums[j - 1] = nums[j];
        //         }
        //         nums[nums.size() - 1] = 0;
        //     }
        // }
        
        int k = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] != 0){
                nums[k++] = nums[i];
            }
        }
        
        for(; k<nums.size(); k++){
            nums[k] = 0;
        }

    }
};
