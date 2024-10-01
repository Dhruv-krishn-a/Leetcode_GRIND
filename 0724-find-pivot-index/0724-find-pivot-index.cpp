class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = 0; 
        int end = nums.size()-1;
        int sum = 0 ;
        //Taking sum of num
        while(pivot <= end ){
            sum+= nums[pivot];
            pivot++;
        }
        int RightSum = sum ;
        int LeftSum = 0 ;
        pivot = 0 ;
        while(pivot <= end){
            if(pivot == 0 ){
                LeftSum = 0;
            } else{
                LeftSum+=nums[pivot-1];
            }
            if(pivot == end){
                RightSum = 0;
            }else{
                RightSum -= nums[pivot];
            }
            if(RightSum == LeftSum ){
                return pivot;
            }
            pivot++;
        }
        return -1 ;
    }
};