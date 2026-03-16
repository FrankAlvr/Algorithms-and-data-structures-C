#include <algorithm>
#include <stdint.h>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        
        
        printf("El tamaño del vector: %d",nums.size());
        
        for(i = 0; i<nums.size(); i = i+2){      
            if((i+1) < nums.size()){
                if(nums[i]^nums[i+1]){
                    return nums[i];
                }    
            }else{
                break;
            }
        } 
    return nums[i]; 
    }
};
