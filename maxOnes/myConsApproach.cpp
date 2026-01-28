class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
       

        int maxOnes=0, checkOnes=0;

        int i,j;
        for(i=0;i<n;i++){
            if(nums[i]==1){
                checkOnes++;
                break;
            }
        }

    
        for(j=i+1;j<n;j++){
            if(nums[j]==1){
                checkOnes++;
            }
            else{
                maxOnes=max(maxOnes,checkOnes);
                checkOnes=0;
            }
            
        }
        maxOnes=max(maxOnes,checkOnes); 
        return maxOnes;
 
    }
};
