class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> result;

        int minDiff = INT_MAX;

        // Step 1: find minimum absolute difference
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = abs(arr[i] - arr[j]);
                minDiff = min(minDiff, diff);
            }
        }

        // Step 2: collect all pairs with that difference
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(arr[i] - arr[j]) == minDiff) {
                    // order pair as required (smaller first)
                    result.push_back({
                        min(arr[i], arr[j]),
                        max(arr[i], arr[j])
                    });
                }
            }
        }

        return result;
    }
};
