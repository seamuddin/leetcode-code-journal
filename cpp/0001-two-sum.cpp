class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if (mp.find(needed) != mp.end()) {
                return { mp[needed], i };  // return answer
            }

            mp[nums[i]] = i;  // store index
        }

        return {};  
    }
};
