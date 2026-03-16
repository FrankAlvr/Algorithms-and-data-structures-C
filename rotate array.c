void reverse(int* numero, int start, int end){
    int left;
    int right;
    
    while (start < end){
        left = *(numero + start);
        right = *(numero + end);
        *(numero + start) = right;
        *(numero + end) = left;
        
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    
    int left;
    int right;
    
    k = k % numsSize;
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize-1);
    reverse(nums,0,numsSize-1);
 
}
