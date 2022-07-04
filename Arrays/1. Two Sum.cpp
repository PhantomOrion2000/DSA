class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> indices;
        // for(int i = 0; i<n; i++) {
        //     for(int j = i+1; j<n; j++) {
        //         if(nums[i] + nums[j] == target) {
        //             indices.push_back(i);
        //             indices.push_back(j);
        //         }
        //     }
        // }
        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++) {
            int new_tar = target - nums[i];
            if(mpp.find(new_tar) != mpp.end()){
                indices.push_back(i);
                indices.push_back(mpp[new_tar]);
                return indices;
            }
            mpp[nums[i]] = i;
        }
        return indices;
    }
};
