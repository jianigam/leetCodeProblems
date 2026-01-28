class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int maxOnes=0, checkOnes=0;

       for(int i =0;i<n;i++){
         if(nums[i]==1){
             checkOnes++;
             maxOnes=max(checkOnes, maxOnes);
         } else{
           checkOnes=0;
         }
        return maxOnes;
 
    }
};
