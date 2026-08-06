class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = 0;
        int n = colors.size();
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, (n - 1) - i);
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            if (colors[0] != colors[j]) {
                ans = max(ans, j - 0);
                break;
            }
        }
        return ans;
    }
};