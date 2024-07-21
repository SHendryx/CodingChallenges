#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    set<int> myNums(nums.begin(), nums.end());
    if (myNums.empty()){
      return 0;
    }
    int length;
    int longest = 0;
    for (auto it = myNums.begin(); it != myNums.end(); it++){
      if (myNums.find(*it - 1) == myNums.end()){
        length = 0;
        while (myNums.find(*it + length) != myNums.end()){
          length++;
        }
        longest = max(length, longest);
        it = myNums.find(*it + length - 1);
      }
    }
    return longest;
  }
};