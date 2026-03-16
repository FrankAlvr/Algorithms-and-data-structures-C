#include <algorithm>
#include <stdint.h>

bool ordenada(const vector<int>& numero, int tamaño){
    for(uint16_t i = 0; i<tamaño-1; i++){
        if(numero[i] > numero[i+1]) return false;
    }
    
    return true;
}


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> salida; 
        

        uint32_t i = 0;
        uint32_t j = 0;
        
        if(~ordenada(nums1, nums1.size())){
          sort(nums1.begin(),nums1.end());  
        }
        if(~ordenada(nums2, nums2.size())){
          sort(nums2.begin(),nums2.end());  
        }
        
        while((i < nums1.size()) && (j < nums2.size())){
            if(nums1[i] == nums2[j]){
                salida.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i] < nums2[j]){
                i++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }
            
        }
        
        return salida;
    } 
};
