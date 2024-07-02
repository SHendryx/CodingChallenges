#include <unordered_map>
#include <vector>

using namespace std;

class TwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map <int, int> hashmap;
        std::vector<int> pair;
        for (int i = 0; i < nums.size(); i++){
            if (hashmap.contains(nums[i])){
                pair = {i, hashmap[nums[i]]};
                return pair;
            }
            hashmap[target-nums[i]] = i;
        }
        return pair;
    }
};