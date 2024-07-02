#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Top_K_Frequent_Elements {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> counts;
        priority_queue<pair<int,int>> maxHeap;

        for (int &num:nums){
            counts[num]++;
        }

        for (auto num:counts){
            maxHeap.push({num.second,num.first});
        }
        
        for (int i = 0; i < k; i++){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return result;
    }
};