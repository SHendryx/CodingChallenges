#include <vector>

using namespace std;

class Find_Minimum_In_Rotated_Sorted_Array {
public:
    int findMin(vector<int>& nums) {
      int n = nums.size() - 1;
      int l = 0;
      int r = n;
      int m = (l + r) / 2;

      while (l < r){
        if (nums[m] > nums[r]){
          l = m + 1;
        } else {
          r = m;
        }
        m = (l + r) / 2;
      }
      return nums[m];
    }
};