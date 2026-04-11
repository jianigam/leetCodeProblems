/* Line 16: Char 26: runtime error: 1.26765e+30 is outside the range of representable values of type 'int' (solution.cpp)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:25:26 */
class Solution {
public:
    int superPow(int a, vector<int>& b) {

        int n= b.size();
        int power=0;

        int i=0;
        while(i<n){
            power+= b[i];
            power= power*10; //extra 0 at the end
            i++;
        }
      
        if (a<1337){
            //pow returns bool
            return ((int)pow(a, power));
        }

        else {
            return ((int)pow(a, power) % 1337);

        }
        
    }
};
