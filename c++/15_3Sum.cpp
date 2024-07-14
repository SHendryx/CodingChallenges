#include <vector>
#include <algorithm>

using namespace std;

class ThreeSum {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int b, c;
    vector<vector<int>> res;
    for (int a = 0; a < nums.size() - 2; a++) {
      if (a > 0 && nums[a] == nums[a-1]){
        continue;
      }
      b = a + 1;
      c = nums.size() - 1;
      while (b < c){
        if (nums[a] + nums[b] + nums[c] < 0) {
          b++;
        }
        else if (nums[a] + nums[b] + nums[c] > 0) {
          c--;
        }
        else {
          res.push_back({nums[a], nums[b], nums[c]});
          b++;
          while (nums[b] == nums[b-1] && b < c){
            b++;
          }
        }
      }
    }
    return res;
  }
};