class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int ten=0, fiv=0;

        bool ans=true;
        for (int i=0; i<bills.size();i++){
        if (bills[i]==5){
            fiv++;
        }

        else if (bills[i]==10){
            ten++;
            if(fiv==0){
               return false;
            }
            else {
                fiv--;
                }
        }

        //if ten==0 && fiv<3 return false issue: when ten=1 and fiv=1 then it was returning false but inthis case case change can be returned
        //if ten is even ten%2==0 && fiv=1 then return false thing if 10 are even like 10X2 then change will not be returned but what about 10x2 and 5x1 no logic but it passed the sample testcase could hv been like 10x2 and 5X0
        //then this if 10x1 and 5x1 is there then return 15 else return 5x3 if available else return false
        else if (bills[i]==20){
            if(ten>=1 && fiv>=1){
                ten--;
                fiv--;
            }
            else if (ten==0 && fiv>=3){
                fiv=fiv-3;
            }
            else {
                return false;
            }
        }
        }
        return ans;


        
    }
};
