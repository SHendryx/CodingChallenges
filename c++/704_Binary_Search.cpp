#include <vector>

using namespace std;

class Binary_Search {
public:
  int search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;
    int n = (l + r) / 2;

    while (nums[n] != target) {
      if (l >= r) {
        return -1;
      }
      if (nums[n] > target) {
        r = n - 1;
      }
      if (nums[n] < target) {
        l = n + 1;
      }
      n = (l + r) / 2;
    }
    return n;
  }
};