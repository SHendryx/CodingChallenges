#include <vector>

using namespace std;

class Search_In_Rotated_Sorted_Array {
public:
  int search(vector<int>& nums, int target) {
    int n = nums.size() - 1;
    int l = 0;
    int r = n;
    int m;
    while (l <= r){
      m = (l + r) / 2;
      if (nums[m] == target) return m;
      if (nums[m] >= nums[l]){
        if (nums[l] <= target && target <= nums[m]){
          r = m - 1;
        } else {
          l = m + 1;
        }
      } else {
        if (nums[m] <= target && target <= nums[r]){
          l = m + 1;
        } else {
          r = m - 1;
        }
      }
    }
    return -1;
  }
};