#include <vector>

using namespace std;

class Trapping_Rain_Water {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        int water = 0;
        while (l < r) {
          if (height[l] < height[r]) {
            l++;
            if (height[l] < maxL) {
              water += maxL - height[l];
            } else {
              maxL = height[l];
            }
          } else {
            r--;
            if (height[r] < maxR) {
              water += maxR - height[r];
            } else {
              maxR = height[r];
            }
          }
        }
        return water;
    }
};