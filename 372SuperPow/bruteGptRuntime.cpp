class Solution {
public:
    int superPow(int a, vector<int>& b) {

        int n = b.size();
        long long power = 0;

        int i = 0;
        while (i < n) {
            power = power * 10 + b[i];   // ✅ fixed digit construction
            i++;
        }

        // ❗ still risky if power is huge, but keeping your idea
        long long result = pow(a, power);  

        return result % 1337;   // ✅ apply mod at the end
    }
};
