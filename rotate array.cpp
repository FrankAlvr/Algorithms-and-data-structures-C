class Solution {
public:
    
    void intercambiar(vector<int>& nums, int start, int end){
        int left;
        int right;
        
        while(start < end){
            
            left = nums[start];
            right = nums[end];
            nums[start] = right;
            nums[end] = left;
            
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % (nums.size());
        
        intercambiar(nums,0,nums.size()-k-1);
        intercambiar(nums,nums.size()-k,nums.size()-1);
        intercambiar(nums,0,nums.size()-1);
    }
    
    
};
