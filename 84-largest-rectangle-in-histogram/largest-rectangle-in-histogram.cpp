class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        for (int i = 0; i <= heights.size(); i++) {
            int currentheight = (i == heights.size() ? 0 : heights[i]);
            while (!st.empty() && currentheight < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int width;
                if (st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }
                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};