#include <vector>

using namespace std;

class Container_With_Most_Water {
public:
  int maxArea(vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int maxArea = 0;
    while (l < r) {
      maxArea = max(maxArea, (min(height[l], height[r]) * (r - l)));
      height[r] < height[l] ? r-- : l++;
    }
    return maxArea;
  }
};