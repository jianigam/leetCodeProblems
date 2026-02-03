class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int p,q;
        
        //p
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                p=i;
                break;
            }
        }
        //q
        for(int i=p;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                q=i;
                break;
            }
        }

        
        bool flag=false;
        int pass=0;
        //0-p
        for(int i=0;i<p;i++){
            if(nums[i+1]>nums[i]){
                flag=true;
            }
        }

        if(flag==true){
            pass++;
            flag=false;

        }

        //p-q
        for(int i=p;i<q;i++){
            if(nums[i+1]<nums[i]){
                flag=true;
            }
        }
        if(flag==true){
            pass++;
            flag=false;

        }

        //q-n
        for(int i=q+2;i<n;i++){
            if(nums[i]>nums[i-1]){
                flag=true;
            }
        }

        if(flag==true){
            pass++;

        }
        if(pass==3){
            return true;
        }

        return false;

        

    }
};
