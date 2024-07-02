#include <unordered_map>
#include <vector>

using namespace std;

class ContainsDuplicate {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map <int, int> hashmap;

        for (auto &num : nums){
            if (hashmap[num] > 0) {
                return true;
            }
            hashmap[num]++;
        }
        return false;
    }
};