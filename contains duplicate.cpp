#include <stdint.h>
#include <algorithm>

class Solution {
public:

    bool containsDuplicate(vector<int32_t>& nums) {
        sort(nums.begin(),nums.end());
  
        for(uint32_t i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
