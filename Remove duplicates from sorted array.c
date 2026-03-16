int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int* left = nums;
    int* right = nums + 1;
    int k = 1;
    
    while (right < nums + numsSize){
        if (*left != *right){
            left++;
            *left = *right;
            k++;    
        }
        right++;
    }
    return k;
}

