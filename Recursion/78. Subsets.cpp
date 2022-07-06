class Solution {
public:
    void solve(vector<int>& nums, int index,vector<vector<int>> &ans, vector<int> &op ) {
        if(index >= nums.size()) {
            ans.push_back(op);
            return;
        }
        
        solve(nums, index+1, ans, op);
        
        op.push_back(nums[index]);
        solve(nums, index+1, ans, op);
        op.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        int index = 0;
        solve(nums, index, ans, op);
        return ans;
    }
};
