#include <stdint.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    for(int i = digitsSize-1; i >= 0 ; i--){
        if(digits[i] < 9 ){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int *arr = calloc(digitsSize+1,sizeof(int));
        if (arr == NULL) return NULL;
    arr[0] = 1;                     // [1, 0, 0, ..., 0]
    *returnSize = digitsSize + 1;
    return arr; 
 
}
