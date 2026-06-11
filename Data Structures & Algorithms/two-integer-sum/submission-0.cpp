class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Use the Brute force method of the two loop thrus to find the desired pair
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums [i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
