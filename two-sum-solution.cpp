/**
* author: zachary lauzon
* date: 2022-07-26
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetList;
        int offSet = 0;
        
        //Only looking for sum of TWO numbers to equal target
        while(targetList.size() != 2) {
            //Clear list and assign [0] to (new) offSet
            targetList.clear();
            targetList.emplace_back(offSet);
            
            for(int i = 0 + offSet; i < nums.size(); i++) {
                if (nums[i] + nums[targetList.front()] == target && i != offSet) {
                    targetList.emplace_back(i);
                }
            }
            offSet++; // failed to find the target, adjust offSet by +1 and add it to iterator
        }
        return targetList;
    }
};
