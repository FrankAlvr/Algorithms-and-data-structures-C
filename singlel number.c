#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int comparar(const void *a, const void *b){
    int val_a = *(const int*)a;
    int val_b = *(const int*)b;
    
    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    
    return 0;
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),comparar);
    
    for(uint16_t i = 0; i<numsSize; i++){
        printf("numsSize[%d] = %d\n",i,nums[i]);
    }
    
    for (uint16_t i = 0; i<numsSize; i=i+2){
        if ((i+1 < numsSize)){
            if ((nums[i]^nums[i+1])){
                return nums[i];  
            }   
        }else{
            return nums[i];
        }    
    }
    return 0;
}
