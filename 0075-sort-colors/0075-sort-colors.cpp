class Solution {
public:
    void sortColors(vector<int>& nums) {
        int Start=0,End=nums.size()-1,Index=0;
        while(Index<=End){
            if(nums[Index]==0){
                swap(nums[Index],nums[Start]);
                Start++;
                Index++;
            }
            else if(nums[Index]==1){
                Index++;
            }
            else {
                swap(nums[End],nums[Index]);
                End--;
            }
        }
    }
};