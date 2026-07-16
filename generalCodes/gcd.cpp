#include <algorithm>   

int gcd(int x, int y) {
    int m = std::min(x, y);

    for (int i = m; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            return i;
        }
    }

    return 1;
}
