class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> numbers;
        for(int i = 0; i<nums.size(); i++) {
            for(int x=0; x<numbers.size(); x++){
                if(numbers[x] == nums[i])
                return true;
            }
            numbers.push_back(nums[i]);
        }
        return false;
    }
};