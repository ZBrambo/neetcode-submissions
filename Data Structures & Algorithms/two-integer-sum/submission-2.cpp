//pratcing the hash map method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        //create the hash map
        unordered_map<int, int> prevValMap;

        for(int i = 0; i < n; i++){
            int diff = target - nums[i];
            if(prevValMap.find(diff) != prevValMap.end()){
                return {prevValMap[diff], i};
            }

            prevValMap.insert({nums[i], i});
        }
        return {};
    }
};
