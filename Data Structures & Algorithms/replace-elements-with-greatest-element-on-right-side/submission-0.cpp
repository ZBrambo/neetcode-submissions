class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        //Make initlize number -1 on right side per directions
        int rightMax = -1;
        int size = arr.size();

        //Loop through array right to left
        for (int i = size - 1; i >= 0; i--) {
            int maxNum = max(rightMax, arr[i]);
            arr[i] = rightMax;
            rightMax = maxNum;
        }
        return arr;
    }
};