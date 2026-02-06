//TLE 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum;
      //initialised it w 0 thats why got wrong answer for this test case [-1] was giving 0 as output
        int maxSum=INT_MIN;
        for(int i=0;i<n; i++){
          //declared sum w maxSum as 0 so the sum was never reset to 0 after one cycle got wrong answer (huge sum) so got to know i hv declared sum in wrong scope changed it
            sum=0;
            // initialised j as 0 then sum was weird so remembered to initialise it same as i
            for(int j=i; j<n ; j++){
                sum+=nums[j];
                maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
        
    }
};
