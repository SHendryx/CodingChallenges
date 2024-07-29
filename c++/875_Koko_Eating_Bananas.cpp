#include <vector>
#include <algorithm>

using namespace std;

class Koko_Eating_Bananas {
public:
  int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int mid = (low + high) / 2;

    while (low < high) {
      int numHours = 0;
      for (int pile : piles) {
        numHours += (pile / mid);
        if (pile % mid != 0) {
          numHours ++;
        }
      }
      if (numHours <= h) {
        high = mid;
      } else {
        low = mid + 1;
      }
      mid = (low + high) / 2;
    }
    return mid;
  }
};