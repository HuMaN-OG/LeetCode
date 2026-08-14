class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int mid = low + (high - low) / 2;
        swap(nums[mid], nums[high]);
        int pivot = nums[high];
        int i = low;
        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[high]);
        return i;
    }
    void quickSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;
        int pivotindex = partition(nums, low, high);
        quickSort(nums, low, pivotindex - 1);
        quickSort(nums, pivotindex + 1, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        quickSort(nums, low, high);
        return nums;
    }
};