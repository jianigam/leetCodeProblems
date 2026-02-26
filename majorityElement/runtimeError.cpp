class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    

        int n=nums.size();
        int i=0,j=0, curr=0 ,count=0, ans=-1 ;

        while(j<=n){
            curr=j-i;
            if(nums[j]!=nums[i] && curr>count ){
                ans=nums[i];
                i=j;
                count=curr;
            }
            else if(nums[i]==nums[j]){
                j++;
            }
        }
        return ans;

        
    }
};
/*
  bhai the only issue is is checking for n+1 index which doesnot exist
Line 12: Char 16:
=================================================================
==23==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x502000000194 at pc 0x55a61fc90236 bp 0x7ffe9d6307d0 sp 0x7ffe9d6307c8

  */
